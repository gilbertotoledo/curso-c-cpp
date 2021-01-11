<html>
<head></head>
<body>
<?php
	echo "GERAR 30 MIL NUMEROS SEQUENCIAIS<br>";
	
	list($usec, $sec) = explode(' ', microtime());
	$inicio = (float) $sec + (float) $usec;

    for($i=1;$i<=30000;$i++){
		echo $i."<br>";
    }
	
	list($usec, $sec) = explode(' ', microtime());
	$fim = (float) $sec + (float) $usec;

	echo '<br><br>Tempo de execucao: '.round($fim - $inicio, 5);
?>
</body>
</html>

