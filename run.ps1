# Script de compilacion y ejecucion para PowerShell
if (Test-Path "app.exe") { Remove-Item -Force "app.exe" }
if (Test-Path "app") { Remove-Item -Force "app" }

Write-Host "Compilando proyecto (con include y src)..."
g++ -std=c++17 -I include main.cpp src/*.cpp -o app.exe

if ($LASTEXITCODE -eq 0) {
    Write-Host "¡Compilacion exitosa!"
    Write-Host "--------------------"
    .\app.exe
} else {
    Write-Host "Error en la compilacion."
}
