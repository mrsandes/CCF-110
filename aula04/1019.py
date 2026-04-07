# 1019

seconds = int(input(""))

hours = seconds // 3600
minutes = (seconds - (hours * 3600)) // 60
seconds -= ((hours * 3600) + (minutes * 60))

print(f"{hours}:{minutes}:{seconds}")