$input = Read-Host "Enter Input: "

if ([int]$input % 2 -eq 0) {
    Write-Host "Bob"
} else {
    Write-Host "Alice"
}