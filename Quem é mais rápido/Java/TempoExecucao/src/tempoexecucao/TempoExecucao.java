package tempoexecucao;

/**
 *
 * @author Gilberto Toledo
 */
public class TempoExecucao {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double inicio = System.currentTimeMillis();

        //GERAR 30 MIL NUMEROS SEQUENCIAIS
        /*
        for(int i=1;i<=30000;i++){
            System.out.println(i);
        }
        */
        
        
        //GERAR 30 MIL NÚMEROS ALEATÓRIOS DE 0 A 50 MIL COM REPETIÇÃO
        /*
        int i;        
        int numeros[] = new int[30000];
        int numero;
        for(i=0;i<30000;i++){
            numero = (int) (1 + Math.random() * 50000); // gera um valor randomico de 0.0 ate menores q 1.0, multiplica por 50000 e soma 1. Convertendo o resultado para int.
            numeros[i] = numero;
            System.out.println(numero);
        }
        */
        
        //GERAR 30 MIL NÚMEROS ALEATÓRIOS DE 0 A 50 MIL SEM REPETIÇÃO
        /*
        int i, j, existe;        
        int numeros[] = new int[30000];
        int numero;
        for(i=0;i<30000;i++){
            do{
                numero = (int) (1 + Math.random() * 50000); // gera um valor randomico de 0.0 ate menores q 1.0, multiplica por 50000 e soma 1. Convertendo o resultado para int.
                existe = 0; //0 -> NÃO EXISTE |  1 -> EXISTE
                for(j=0;j<i;j++){
                    if(numeros[j]==numero){
                        existe = 1;
                        break;
                    }
                }
            }while(existe==1);

            numeros[i] = numero;
            System.out.println(numero);
        }
        */
        
        //GERAR OS PRIMEIROS 10 MIL NUMEROS PRIMOS
        
        int numeros[] = new int[10000];
        int numero, primo;
        int i, j, divisores;
        numero = 2;
        for (i = 0; i < 10000; i++) {
            do{
                divisores = 0;
                for (j = 1; j <= numero; j++) {
                    if (numero % j == 0) {
                        divisores++;
                    }
                    if(divisores>2)
                        break;
                }
                if(divisores>2){
                    primo=0;
                    numero++;
                }else{
                    primo=1;
                }
            }while(primo==0);//0 -> NÃO PRIMO |  1 -> PRIMO
            numeros[i] = numero;
            System.out.println(numero);
            numero++;
        }
        
        
        double fim = System.currentTimeMillis();
        System.out.println("Tempo de execucao: "+String.format("%2.5f",(fim-inicio)/1000) );
    }
    
}
