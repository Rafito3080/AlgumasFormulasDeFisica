#include <iostream>
using namespace std;
int main(){
	float num1, num2, num3, num4, resultado;
	int escolha, SCH, tempo, distancia, resultado2;
do{
	cout <<"Olá! Sabia que consigo calcular: \n1.Aceleração. \n2.Velocidade. \n3.Período / Frequência. \n4.Força / Aceleração(da força) / Massa. \nCaso queira calcular algum desses, pressione seus respectivos números. E caso não queira, pressione outro número diferentes desses.\n";
	cin >> escolha;
	switch(escolha){
	case 1:
		cout <<"Para calcular a aceleração, precisamos de: velocidade inicial, velocidade final, tempo inicial e tempo final. \nQual é a velocidade inicial?\n";
		cin >> num1;
		cout <<"Qual é a velocidade final?\n";
		cin >> num2;
		cout <<"Qual é o tempo inicial?(Lembrando que o tempo é em segundos)\n";
		cin >> num3;
		cout <<"Qual é o tempo final?\n";
		cin >> num4;
		resultado = (num2 - num1)/(num4 - num3);
		cout <<"A fórmula da aceleração é: A = Δv/Δt \nResultado: \nA = "<< resultado <<" m/s² \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		cin >> SCH;
		break;
	case 2:
		cout <<"Em qual medida está o tempo? \n1.Segundos. \n2.Horas.\n";
		cin >> tempo;
		switch(tempo){
		case 1:
			cout <<"Em qual medida está a distância?  \n1.Centímetros \n2.Metros. \n3.Kilômetros\n";
		    cin >> distancia;
		    switch(distancia){
		    case 1:
		    	cout <<"Qual é o valor, em segundos, do tempo inicial?\n";
		    	cin >> num2;
		    	cout <<"Qual é o valor, em segundos, do tempo final?\n";
		    	cin >> num1;
		    	cout <<"Qual é o valor, em centímetros, da distância inicial?\n";
		    	cin >> num4;
		    	cout <<"Qual é o valor, em centímetros, da distância final?\n";
		    	cin >> num3;
		    	resultado = ((num3 - num4)/100)/(num1 - num2);
		    	cout <<"A fórmula da velocidade é: V = Δs/Δd \nResultado: "<< resultado <<" m/s ou "<< resultado * 3.6 <<" km/h. \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		    	cin >> SCH;
		    	break;
		    case 2:
		    	cout <<"Qual é o valor, em segundos, do tempo inicial?\n";
		    	cin >> num2;
		    	cout <<"Qual é o valor, em segundos, do tempo final?\n";
		    	cin >> num1;
		    	cout <<"Qual o valor, em metros, da distância inicial?\n";
		    	cin >> num4;
		    	cout <<"Qual é o valor, em metros, da distância final?\n";
		    	cin >> num3;
		    	resultado = (num3 - num4)/(num1 - num2);
		    	cout <<"A fórmula da velocidade é: V = Δs/Δd \nResultado: "<< resultado <<" m/s ou "<< resultado * 3.6 <<" km/h \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		    	cin >> SCH;
		    	break;
		    case 3:
		    	cout <<"Qual é o valor, em segundos, do tempo inicial?\n";
		    	cin >> num2;
		    	cout <<"Qual é o valor, em segundos, do tempo final?\n";
		    	cin >> num1;
		    	cout <<"Qual o valor, em kilômetros, da distância inicial?\n";
		    	cin >> num4;
		    	cout <<"Qual é o valor, em kilômetros, da distância final?\n";
		    	cin >> num3;
		    	resultado = ((num3 - num4)*100)/(num1 - num2);
		    	cout <<"A fórmula da velocidade é: V = Δs/Δd \nResultado: "<< resultado <<" m/s ou "<< resultado * 3.6 <<" km/h \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		    	cin >> SCH;
		    	break;
	    default:
	    	cout <<"Tente novamente \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
	    			cin >> SCH;
		    }
		break;
	    case 2:
		    	cout <<"Em qual medida está a distância?  \n1.Centímetros \n2.Metros. \n3.Kilômetros\n";
		    	cin >> distancia;
		        switch(distancia){
		    		case 1:
		    			    cout <<"Qual é o valor, em horas, do tempo inicial?\n";
		    			    cin >> num2;
		    			   	cout <<"Qual é o valor, em horas, do tempo final?\n";
		    			   	cin >> num1;
		    			   	cout <<"Qual é o valor, em centímetros, da distância inicial?\n";
		    			   	cin >> num4;
		    		    	cout <<"Qual é o valor, em centímetros, da distância final?\n";
		    		    	cin >> num3;
		    		    	resultado = ((num3 - num4)*10000)/(num1 - num2);
		   			    	cout <<"A fórmula da velocidade é: V = Δs/Δd \nResultado: "<< resultado / 3.6 <<" m/s ou "<< resultado <<" km/h. \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		   			    	cin >> SCH;
		   			    	break;
   			       case 2:
		    		    	cout <<"Qual é o valor, em horas, do tempo inicial?\n";
		    			   	cin >> num2;
		    		    	cout <<"Qual é o valor, em horas, do tempo final?\n";
		    		    	cin >> num1;
		    		    	cout <<"Qual o valor, em metros, da distância inicial?\n";
		   			    	cin >> num4;
		   			    	cout <<"Qual é o valor, em metros, da distância final?\n";
		   			    	cin >> num3;
		   			    	resultado = ((num3 - num4)*10)/(num1 - num2);
	    			    	cout <<"A fórmula da velocidade é: V = Δs/Δd \nResultado: "<< resultado / 3.6 <<" m/s ou "<< resultado <<" km/h \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
	    			    	cin >> SCH;
	    			    	break;
		    	  case 3:
		    		    	cout <<"Qual é o valor, em horas, do tempo inicial?\n";
		    		    	cin >> num2;
		   			    	cout <<"Qual é o valor, em horas, do tempo final?\n";
		   			    	cin >> num1;
		   			    	cout <<"Qual o valor, em kilômetros, da distância inicial?\n";
		   			    	cin >> num4;
	    			    	cout <<"Qual é o valor, em kilômetros, da distância final?\n";
	    			    	cin >> num3;
		   			    	resultado = (num3 - num4)/(num1 - num2);
		   			    	cout <<"A fórmula da velocidade é: V = Δs/Δd \nResultado: "<< resultado / 3.6 <<" m/s ou "<< resultado <<" km/h \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		   			    	cin >> SCH;
		   			    	break;
	  			    default:
	  			    	cout <<"Tente novamente \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
	  			    			cin >> SCH;
		   			    }
		   			 break;
		        default:
		        	cout <<"Tente novamente \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		        			cin >> SCH;
		        	break;
		}
		break;
	case 3:
			cout <<"Qual é a quantidade de repetições?\n";
			cin >> num1;
			cout <<"Qual é o tempo?\n";
			cin >> num2;
			resultado = num1/num2;
			cout <<"A fórmula da frequência é: f = N/T \nA frequência é de "<< resultado << " Hz. E o período de " << 1/resultado <<" s. \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
			cin >> SCH;
			break;
	case 4:
		cout <<"Qual é a icógnita? \n1.A força resultante. \n2.A aceleração. \n3.A massa?\n";
		cin >> resultado2;
		switch(resultado2){
		case 1:
			cout <<"Qual é o valor da massa? \n";
			cin >> num1;
			cout <<"Qual é o valor da aceleração? \n";
			cin >> num2;
			resultado = num1 * num2;
			cout <<"A fórmula da força é : R = m * a \nResultado: " << resultado <<" N \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
			cin >> SCH;
			break;
		case 2:
		    cout <<"Qual é o valor da força resultante?\n";
		    cin >> num1;
		    cout <<"Qual é o valor da massa? \n";
		    cin >> num2;
		    resultado = num1 / num2;
		    cout <<"A fórmula da aceleração (A = Δv / Δt) é, neste caso da força, a = f / m \nResultado : "<< resultado <<" m/s² \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
			cin >> SCH;
		    break;
		case 3:
			cout <<"Qual é o valor da força resultante? \n";
			cin >> num1;
			cout <<"Qual é o valor da aceleração?\n";
			cin >> num2;
			resultado = num1 / num2;
			cout <<"A fórmula da massa (P / g), neste caso é: m = f / a \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
			cin >> SCH;
			break;
		default:
			cout <<"Tente novamente \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
					cin >> SCH;
				break;
		}
		break;
	default:
		cout <<"Tente novamente \nPressione 1 para tentar de novo ou qualquer outra tecla para sair.\n";
		cin >> SCH;
		break;
	}
}while(SCH == 1);
cout <<"Obrigado e até a próxima!";
	return 0;
}
