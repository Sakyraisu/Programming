# ������������ ������ �1  
### ������� 1   
#### N1  
���   
��� a, b, F  
���  
���� a, b  
F:= ((0,75sqrt(b)-1/2sqrt(3)a)*sin(b*p/3))/cos[(a+b)^2+e^a]  
����� F  
���  
����-�����:   
![](img-1-lab/diagram1.png)
#### N3  
���   
��� a, b, F  
���  
���� a, b  
F:=0,314*e^a-0,512e^b*ln(a)/sin(b*p)  
����� F  
���  
����-�����:  
![](img-1-lab/diagram2.png)  
#### N5
���   
��� a, b, F  
���  
���� a, b  
F:=(sqrt(3)a*cos(e^b-1)*p/4)/0,5121*(1-ln(b/a))  
����� F  
���  
���� �����:   
![](img-1-lab/diagram3.png)  
#### N7  
���   
��� a, b, F  
���  
���� a, b  
F:=sqrt(3)((0,127*e^(b/a)/1-sqrt(3)(cos((b/a)*p)))^2)  
����� F  
���  
���� �����:  
![](img-1-lab/diagram4.png)  
#### N9  
���  
��� a, b, F  
���  
���� a, b  
F:=sqrt(3)((0,719/b)*(b^2-a^2/a^2+b^2)+cos((ln(b))*p/6)  
����� F  
���  
���� �����:  
![](img-1-lab/diagram5.png)  
#### N11  
���  
��� a, b, F  
���  
���� a, b  
F:=(4,3sin[(a+1)p])/((b/a)*1-cos[(a+b)p]+ln(b))  
����� F  
���  
���� �����:  
![](img-1-lab/diagram6.png)  
#### N13  
���   
��� a, b, F  
���  
���� a, b  
F:=(sqrt(3)(((a-b)^2)*sin^2(1-a/b)*p/3*cos^2(1-b/a)*p/3))/0,701*ln((a-b)^2)  
����� F  
���  
���� �����:  
![](img-1-lab/diagram7.png)  
#### N15  
���   
��� a, b, F  
���  
���� a, b  
F:=sqrt(3)(((a-b)/(b+a))*e*((ln[cos(a-b)*p/8))/0,137)  
����� F  
���  
���� �����:  
![](img-1-lab/diagram8.png)  
### ������� 2  
#### N1  
���  
���  
��� x, y  
���� x, y  
���� y <= 1 � x <= 1 � -x <= y ��
����� "��"  
�����  
����� "���"  
���  
��� 
#### N3  
���  
���  
��� x, y  
���� x, y  
���� x >= 0 � y >= x - 6 � x*x + y*y <= 36 ��  
����� "��"  
�����  
����� "���"  
���  
���  
#### N5  
���  
���  
��� x, y  
���� x, y  
���� y <= 1 - abs(x) � x*x + y*y <= 1 ��  
����� "��"  
�����  
����� "���"  
���  
���  
#### N7  
���  
���  
��� x, y  
���� x, y  
���� max(abs(x), abs(y)) <= 1 � y >= -abs(x) ��  
����� "��"  
�����  
����� "���"  
���  
���  
#### N9  
���  
���  
��� x, y  
���� x, y  
���� 0 <= y � y <= min(1 - x*x, 1 + x) ��  
����� "��"  
�����  
����� "���"  
���  
���  
#### N11  
���  
���  
��� x, y  
���� x, y  
���� max(abs(x), abs(y)) <= 1 � 0 <= y - x � y - x <= 1 ��  
����� "��"  
�����  
����� "���"  
���  
���  
#### N13  
���  
���  
��� x, y  
���� x, y  
���� x >= 0 � 1 <= x*x + y*y � x*x + y*y <= 4 ��  
����� "��"  
�����  
����� "���"  
���  
���  
#### N15  
���  
���  
��� x, y  
���� x, y  
���� max(-0.5 * x, 1.5 * x) - 1 <= y � y <= min(0, x) + 2 ��  
����� "��"  
�����  
����� "���"  
���  
���  
### ������� 3  
#### N1  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
k := 1  
���� E  
����   
Sn := 1 / (n + 1) ^ n  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���  
#### N3  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
n := 1  
���� E  
���� ������ �����  
Sn := 1 / ((2^n) - 3) * ((3^n) - 2)  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���  
#### N5  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
n := 1  
���� E  
����   
Sn := 2n/((3^n)-1)*((3^n)-1)  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���  
#### N7  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
n := 1  
���� E  
����   
Sn := ((1/(3^n))+K)  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���  
#### N9  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
n := 1  
���� E  
����   
Sn := 1/(n+2)^n+1  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���  
#### N11  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
n := 1  
���� E  
����   
Sn := 1/((3^n)-1)  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���  
#### N13  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
n := 1  
���� E  
����   
Sn := n-1/(2^n)-1  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���  
#### N15  
���  
���  
��� S, Sn, E  
��� n  
S := 0  
n := 1  
���� E  
����   
Sn := 5n/2n^n+1  
���� Sn < E ��  
��������  
���  
S := S + Sn  
n := n + 1  
�����  
����� S  
���