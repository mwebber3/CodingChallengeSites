$x = Read-Host "Enter X: "
$y = Read-Host "Enter Y: "

if ([int]$x -gt 0 -and [int]$y -gt 0) {
    Write-Host 1
} elseif ([int]$x -gt 0 -and [int]$y -lt 0) {
    Write-Host 4
} elseif ([int]$x -lt 0 -and [int]$y -gt 0) {
    Write-Host 2
} else {
    Write-Host 3
}