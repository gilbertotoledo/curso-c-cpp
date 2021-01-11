<html>
<head></head>
<body>
<?php
	echo "GERAR 30 MIL NÚMEROS ALEATÓRIOS DE 0 A 50 MIL COM REPETIÇÃO<br>";
	
	list($usec, $sec) = explode(' ', microtime());
	$inicio = (float) $sec + (float) $usec;

    $numeros = array();
    $numero;
    for($i=0;$i<30000;$i++){
        $numero = rand(0,50000);
        $numeros[$i] = $numero;
        echo $numero."<br>";
    }	
	
	list($usec, $sec) = explode(' ', microtime());
	$fim = (float) $sec + (float) $usec;

	echo '<br><br>Tempo de execucao: '.round($fim - $inicio, 5);
?>
</body>
</html>

