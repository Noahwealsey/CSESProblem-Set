Write-Host "Finding .h~ files..."
$files_h = Get-ChildItem -Path . -Filter '*.h~' -File -Recurse

foreach ($file in $files_h) {
    Write-Host "Renaming $($file.Name)..."
    $newName = $file.Name -replace '~', ''
    Write-Host "New name: $newName"
    Rename-Item -Path $file.FullName -NewName $newName
}

Write-Host "Finding .un~ files..."
$files_un = Get-ChildItem -Path . -Filter '*.un~' -File -Recurse

foreach ($file in $files_un) {
    Write-Host "Renaming $($file.Name)..."
    $newName = $file.Name -replace '.un~', ''
    Write-Host "New name: $newName"
    Rename-Item -Path $file.FullName -NewName $newName
}
