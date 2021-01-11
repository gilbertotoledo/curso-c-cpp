<html>
<head></head>
<body>
<?php
	echo "GERAR OS PRIMEIROS 10 MIL NUMEROS PRIMOS<br>";
	
	list($usec, $sec) = explode(' ', microtime());
	$inicio = (float) $sec + (float) $usec;

    $numeros = array();
    $numero = 2;
    for ($i = 0; $i < 10000; $i++) {
        do{
            $divisores = 0;
            for ($j = 1; $j <= $numero; $j++) {
                if ($numero % $j == 0) {
                    $divisores++;
                }
                if($divisores>2)
                    break;
            }
            if($divisores>2){
                $primo=0;
                $numero++;
            }else{
                $primo=1;
            }
        }while($primo==0);//0 -> NÃO PRIMO |  1 -> PRIMO
        $numeros[$i] = $numero;
        echo $numero."<br>";
        $numero++;
    }
	
	list($usec, $sec) = explode(' ', microtime());
	$fim = (float) $sec + (float) $usec;

	echo '<br><br>Tempo de execucao: '.round($fim - $inicio, 5);
?>
</body>
</html>

