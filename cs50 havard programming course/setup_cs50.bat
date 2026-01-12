@echo off
REM Set the path to your project folder
set PROJECT_PATH="C:\Users\nyanj.DESKTOP-H5EPS11\OneDrive\Documentos\cs50 havard programming course"

REM Navigate to the project folder
cd /d %PROJECT_PATH%

REM Check if the MSYS2 UCRT64 shell is installed
if not exist "C:\msys64\ucrt64.exe" (
    echo MSYS2 UCRT64 shell not found. Please install it first.
    pause
    exit /b
)

REM Run MSYS2 UCRT64 shell commands
"C:\msys64\ucrt64.exe" <<EOF
# Update and install required tools
pacman -Syu --noconfirm
pacman -S git make mingw-w64-ucrt-x86_64-gcc --noconfirm

# Clone and build the CS50 library
git clone https://github.com/cs50/libcs50.git libcs50
cd libcs50
make

# Return to the project folder
cd ..
EOF

REM Compile your program
gcc hello.c -Ilibcs50 -Llibcs50 -lcs50 -o hello
if exist "hello.exe" (
    echo Compilation successful. Running the program.
    hello.exe
) else (
    echo Compilation failed.
)

pause
