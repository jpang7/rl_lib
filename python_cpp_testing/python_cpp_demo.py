import subprocess

proc = subprocess.Popen(['./build/python_cpp_demo'],
                        stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True)
input = 1000
for _ in range(1000):
  proc.stdin.write(str(input) + '\n')
  proc.stdin.flush()
  print(proc.stdout.readline())
  input -= 1