# Radek Tonar
# ROBE�EK 

## pohyb
+ pomoc� 4 kol p�ipojen�ch na servomotory
+ ovl�d�n� p�es raspberry pi(1)
+ p�enos sign�lu po wifi z telefonu/tabletu p�es vlastn� applikaci
   
## kamery
1. p�edn�
+ ot�n� kamera, ovl�dan� p�es raspberry pi(1)
+ obraz p�es raspberry pi(1) 
+ p�enos obrazu po wifi z mobiln�ho telefonu 
+ obraz jako pozad� v applikaci pro ovl�d�n� pohybu
2. zadn�
+ soustava mal�ch kamer zapojen�ch do koule zab�raj�c�ch 360�
+ p�enos obrazu p�es raspberry pi(2)
+ p�enos p�es wifi do google cardboard
+ ovld� druh� �lov�k
+ zvuk p�en�en do reproduktoru telefonu �i sluch�tek

##reportov�n� stavu
1. GPS
+ t�i gps moduly 
+ na dva zadn� konce a jeden p�edn�
+ propo�et telemetrie
+ zji�t�n� p�esn� polohy (+-1cm)
+ p�enos p�es raspberry pi(1) do ovl�dac� applikace
2. teplota 
+ sn�m�na pomoc� senzoru na spod vozidla
+ p�enos p�es raspberry pi(1) po wifi do ovl�dac� applikace 
3. stav baterie
+ m��en� p�es raspberry pi(1) 
+ zobrazov�n� na t����seln�m segmentov�m displeji na horn� stran� vozidla
+ p�enos p�es raspberry pi(1) do ovl�dac� applikace pomoc� wifi
+ pokud je stav baterie men�� ne� 20% upozornuje v applikaci     
+ pokud je stav baterie men�� ne� 10% vypne raspberry pi(2), p�enos teploty a telemetrie, stranov� a koncov� sv�tla
+ pokud je stav baterie men�� ne� 5% za�ne p�skat
4. telemetrie
+ zji�tuje pohyb ve 3 os�ch
+ + p�enos p�es raspberry pi(1) do ovl�dac� applikace pomoc� wifi
+ ukl�d� do ulo�i�t�

##zabra�ov�n� koliz�
+ �ty�i infrared senzory na ka�d�m rohu
  + pokud je vzd�lenost men�� ne� 0,5 metru hl�s� opticky pomoc� blikaj�c�ho sv�tla v applikace�
  + pokud je vzd�lenost men�� ne� 2 cm limituje rychlost na 0,3 km/h 

##osv�tlen�
1. vp�edu
+ dv� led sv�tla o v�konu 800 lumen� s vysok�m uhlem rozptylu (160�) 
  + jedno sv�tlo dalkov�, p�ipevn�n� ke kame�e a spole�n� se pohybuj�c�
  + zap�n�n� aotomaticky pomoc� detektoru sv�tla, nebo manualn� p�es applikaci
2. strany
+ blikaj�c� led p�sky 
+ aktivovan� neust�le
3. vzadu
+ dv� �erven� sv�tla trvale zapnuta

##�ern� sk��nka
+ extern� disk p�ipojen k raspberry pi(1)
  + zaznamen�v� teplotu, GPS polohu ze v�ech t�� modul�, stav baterie, pohyb ve 3 os�ch 
  + po vy�erp�n� kapacity za��n� p�emaz�vat nejstar�� z�znamy

##ztr�ta sign�lu
+ GSM modul se SIM kartou 
  + v p��pad� ztr�ty signn�lu applikace upozorn� a za�ne sign�ly pos�lat p�es SMS a MMS
                                                