# Crash clang-p2996's clangd

Applies to bf9669e87570c9fb3d1bf36065ee40683e3d4847 as of 2024-10-19.

### start vscode 
### Make sure clangd has started
### Append new lines to the end of Img.cpp
Here it crashes reliably within a minute.

## To make the crash not happen…

Comment out the line 31 in header.h:

`// #define CRASH_CLANGD`



