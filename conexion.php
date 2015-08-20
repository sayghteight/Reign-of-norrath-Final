<?

/* General Settings (Beta 0.2.2) */

$maintenance = "0" ; // 1 is on / 0 is OFF
$register_active = "Yes"; // Yes permite registro y No los prohibe y no se pueden registrar .
$login_active = "Yes" ; // Permite loguearte


/* Conexión */
 

$db_host = "";                    // Servidor donde está alojada la base de datos

$db_name = "";                    // Nombre de la base de datos

$db_user = "";                    // Usuario de la base de datos

$db_password = "";                // Contraseña de la base de datos

 
/*  Query */ 
$conexion = mysql_connect($db_host, $db_user, $db_password) or die("No se ha podido realizar la conexión con la base de datos. Error: ".mysql_error());

mysql_select_db($db_name, $conexion);

 
?>
