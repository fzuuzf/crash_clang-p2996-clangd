# Crash clang-p2996's clangd

Applies to bf9669e87570c9fb3d1bf36065ee40683e3d4847 as of 2024-10-19 built on Ubuntu 24.04 LTS with this:

`$ cmake -G Ninja -DCMAKE_BUILD_TYPE=RelWithDebInfo -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra" -DLLVM_DEFAULT_TARGET_TRIPLE="x86_64-pc-linux-gnu" -DLLVM_TARGETS_TO_BUILD=X86 -DLLVM_ENABLE_RUNTIMES="libunwind;libcxxabi;libcxx;compiler-rt" -DCMAKE_C_COMPILER=clang-18 -DCMAKE_CXX_COMPILER=clang++-18 -DLLVM_USE_LINKER=lld-18 -S llvm -B /somewhere/clang-p2996/out/RelWithDebInfo`

or the standard gnu compiler:

`$ cmake -G Ninja -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra" -DLLVM_DEFAULT_TARGET_TRIPLE="x86_64-pc-linux-gnu" -DLLVM_TARGETS_TO_BUILD=X86 -DLLVM_ENABLE_RUNTIMES="libunwind;libcxxabi;libcxx;compiler-rt" -S llvm -B /somewhere/clang-p2996/gccRelease`


### start vscode 
### Make sure clangd has started
### Append new lines to the end of Img.cpp
Here it crashes reliably within a minute.

## To make the crash not happen…

Comment out the line 31 in header.h:

`// #define CRASH_CLANGD`



