$jonsAaah = Read-Host "Enter Jons: "
$docsAaah = Read-Host "Enter Docs: "

if ($jonsAaah.length -eq $docsAaah.length) {
    Write-Host "go"
} else {
    Write-Host "no"
}
