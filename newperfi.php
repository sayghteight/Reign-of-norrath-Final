<?
header('Content-Type: text/html; charset=ISO-8859-1');
include('conexion.php'); 
if(maintenance == 1) {
header('Location:maintenance.php');
}
else {
// do nothing
}
include('modulesnew/tables_conexion.php');
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8" />

		<title>Reign of Norrath - Una Nueva Aventura se Acerca</title>
  
          <!-- StyleSheet -->  
        <link id="stylesheet" type="text/css" href="css/style.css" rel="stylesheet" />

		       
    <script type="text/javascript" src="js/jquery-1.7.1.min.js"></script>
    <script type="text/javascript" src="js/jquery-ui.min.js"></script>
    <script type="text/javascript" src="js/jquery.lavalamp.js"></script>
    <script type="text/javascript" src="js/jquery.easing.1.3.js"></script>
    <script type="text/javascript" src="js/jquery.easing.compatibility.js"></script>
    <script type="text/javascript" src="js/slideshow.js"></script>

  <meta name="description" content="" />
  <meta name="author" content="Dustin" />

  <meta name="viewport" content="width=device-width, initial-scale=1.0" />

  <!-- Replace favicon.ico & apple-touch-icon.png in the root of your domain and delete these references -->
  <link rel="shortcut icon" href="/favicon.ico" />
  <link rel="apple-touch-icon" href="/apple-touch-icon.png" />
</head>

<body>
  <div id="contain">
    <div id="wrapper">
      <header>
	<h1 id="logo">
	  <a href="#">Reign of Norrath </a>
	</h1>
	<nav>

  <ul class='lavaLamp'>
  
 <?php
require_once('includesnew/menu.inc');
?>
</ul>
	</nav>
        <div class="user-plate">
	  <div class="bg"></div>
	</div>
      </header>

     <?php
require_once('includesnew/slider.inc');
require_once('includesnew/login.php');
?>
	
<hr class="start-content"></hr>
      <div id="content-contain">
	  <div class="content"> <!-- start content -->
	
 
                  <?php
require_once('includesnew/perfil.php');
?>
	
	</div> <!-- end content -->

           <?php
require_once('includesnew/realms.inc');
require_once('includesnew/ts3.inc');
?>


	  <div class="facebook"> <!-- start facebook -->
	    <div class="facebook-header"></div>
	  </div> <!-- end facebook -->


	</div> <!-- end right-sidebar -->
	<div class="clear"></div>
	<div class="content-end"></div>
      </div> <!-- end content-contain -->
	    <?php
require_once('includesnew/footer.php');
?>  
	 
		</div>
</body>
</html>
