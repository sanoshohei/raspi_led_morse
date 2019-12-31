# raspi_led_morse
受け取った半角英数字をモールス信号に変換し，その信号に従ってLEDを光らせるRaspberry Pi 3 Model B+に向けたキャラクタデバイスのドライバです．
対応している文字は，小文字のa～zと数字の0～9です．
モールス符号は morse_code.h に定義されています．
Raspbianでの動作を確認しています．

### 使い方
1. RaspberryPiのGPIO25とGNDにLEDを取り付ける（任意で抵抗を取り付ける）
1. 文字をデバイスファイルに入力する

### デモ
https://www.youtube.com/watch?v=Rd8gATbJWqQ

### ライセンス
GPL3.0
