cmake -B build-windows-x86-64
msbuild ./build-windows-x86-64/example.sln -t:Rebuild -p:Configuration=Debug
