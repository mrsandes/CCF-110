import json
import os

def split_ipynb_by_comment(file_path):
    # 1. Carregar o arquivo .ipynb
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            notebook = json.load(f)
    except Exception as e:
        print(f"Erro ao ler o arquivo: {e}")
        return

    # 2. Definir o nome da pasta com base no nome do arquivo original
    # Ex: 'C:/downloads/aula2403.ipynb' -> 'aula2403'
    base_name = os.path.basename(file_path)
    folder_name = os.path.splitext(base_name)[0]
    
    if not os.path.exists(folder_name):
        os.makedirs(folder_name)
        print(f"Pasta criada: {folder_name}")

    # 3. Iterar pelas células de código
    for cell in notebook['cells']:
        if cell['cell_type'] == 'code':
            source = cell['source']
            
            if not source:
                continue

            # 4. Identificar o nome do arquivo no primeiro comentário
            first_line = source[0].strip()
            if first_line.startswith('#'):
                # Extrai o número ou nome após o '#'
                raw_name = first_line.replace('#', '').strip()
                
                # Garante a extensão .py
                file_name = f"{raw_name}.py" if not raw_name.endswith('.py') else raw_name
                
                # 5. Salvar o conteúdo na pasta correspondente
                output_path = os.path.join(folder_name, file_name)
                with open(output_path, 'w', encoding='utf-8') as f_out:
                    f_out.writelines(source)
                
                print(f" -> Gerado: {output_path}")

if __name__ == "__main__":
    caminho_input = input("Digite o caminho do arquivo .ipynb: ").strip()
    # Limpeza de aspas comuns ao copiar caminho no Windows/Mac
    caminho_limpo = caminho_input.replace('"', '').replace("'", "")
    
    if os.path.exists(caminho_limpo):
        split_ipynb_by_comment(caminho_limpo)
        print(f"\nConcluído! Verifique a pasta '{os.path.splitext(os.path.basename(caminho_limpo))[0]}'.")
    else:
        print("Erro: Arquivo não encontrado.")