set windows-shell := ["powershell", "-NoLogo", "-ExecutionPolicy", "Bypass"]

alias d := default

default args: build (run args)

[windows]
run args:
    ./build/main.exe "{{args}}"

[unix]
run args:
    ./build/main "{{args}}"

build:
    cmake -S . -B build
    cmake --build build --parallel
