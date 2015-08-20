<?php 
    session_start(); 

    // comprobamos que se haya iniciado la sesión 
    if(isset($_SESSION['usuario_nombre'])) {

	
    $perfil = mysql_query("SELECT * FROM usuarios WHERE usuario_nombre='".$_SESSION['usuario_nombre']."'") or die(mysql_error()); 
    if(mysql_num_rows($perfil)) { // Comprobamos que exista el registro con la ID ingresada 
	
        $row = mysql_fetch_array($perfil); 
        $id = $row["usuario_id"]; 
        $nick = $row["usuario_nombre"]; 
        $email = $row["usuario_email"]; 
        $freg = $row["usuario_freg"];         
        $rangos = $row["usuario_rango"];   
        $status = $row["usuario_estado"]; 
		
		

	
}
?> 




<div class="content-post">
	  <div class="content-heading">  
	  <div class="news-title">Bienvenido a tu Perfil | <?=$nick?></div>
	  </div>
	  <div class="news-post"> 
	    <div class="post-content">
	     
		 
	  <strong> Bienvenido a tu Area de Usuarios </strong> <br/>
		 <b> Durante tu estancia se han incluido nuevas novedades al Area de Usuarios , miralas y aprende a usarlas </b> </br/>
		 
		 <br/>
		<center><strong>Informacion de la cuenta </strong> </center>
		 <br/>
		 <font size="2">E-Mail <?=$email?> </font> <br/>
		 <br/>
		 <font size="2">Registrado el <?=$freg?> </font> <br/>
		 <br/>
		 <font size="2">Estado de la Cuenta <?=$status?> </font> <br/>
		 <br/> 
		 <font size="2"> Puntos de Donación <u> <?=$donacion?> </u> </font> <br/>
		 <br/>
		
		  <?

$adminPRIV = admin;
if($adminPRIV == $rangos) {
	
	echo "
 El rango de tu cuenta es de <font size='2' color='red'><strong>Administrador </strong></font>
		 <br/>
	";
		

$modPRIV = mod;

if($modPRIV == $rangos) {
	echo "
 El rango de tu cuenta es de <font size='2' color='green'><strong>Moderador </strong></font>
		 <br/>
	";
	
			
	}

	$vipPRIV = vip;

if($vipPRIV == $rangos) {
	echo "
 El rango de tu cuenta es de <strong>Usuario <font color='blue'> V.I.P </font></strong>
		 <br/>
	";
	
			
	}	
	
$jugadorPRIV = user;

if($jugadorPRIV == $rangos) {
	echo "
 El rango de tu cuenta es de <strong>Usuario </strong>
		 <br/>
	";
	
			
	}	
}

?>
	
<hr>
<center> <b> Opciones de Cuenta  </b> </center>
	</hr>
<?

$adminOptions = admin;
if($adminOptions == $rangos) {
	
	echo '
	  <div class="footer-nav">
 <ul class="first">
		<li><a href="#">Cambiar Contraseña</a></li>
		<li><a href="#">Cambiar E-Mail</a></li>
		<li><a href="#">Votar</a></li>
		<li><a href="#">Admin</a></li>
		 
		 
		 </ul>
		 
		
	   <ul class="second">
  
		<li><a href="#">Tienda</a></li>
		<li><a href="#">Donar</a></li>
		<li><a href="#">Alpha Keys</a></li>
		<li><a href="#">Mod</a></li>
		
		</ul>
		 </div>
	';
		

$modOptions = mod;

if($modOptions == $rangos) {
	echo '
  <div class="footer-nav">
 <ul class="first">
		<li><a href="#">Cambiar Contraseña</a></li>
		<li><a href="#">Cambiar E-Mail</a></li>
		<li><a href="#">Votar</a></li>
		<li><a href="#">Mod</a></li>
		 
		 
		 </ul>
		 
		
	   <ul class="second">
  
		<li><a href="#">Tienda</a></li>
		<li><a href="#">Donar</a></li>
		<li><a href="#">Alpha Keys</a></li>
		
		</ul>
		 </div>
	';
	
			
	}

	$vipOptions = vip;

if($vipOptions == $rangos) {
	echo '
  <div class="footer-nav">
 <ul class="first">
		<li><a href="#">Cambiar Contraseña</a></li>
		<li><a href="#">Cambiar E-Mail</a></li>
		<li><a href="#">Votar</a></li>
		 
		 
		 </ul>
		 
		
	   <ul class="second">
  
		<li><a href="#">Tienda</a></li>
		<li><a href="#">Donar</a></li>
		<li><a href="#">Alpha Keys</a></li>
		
		</ul>
		 </div>
	';
	
			
	}	
	
$userOptions = user;

if($jugadorPRIV == $rangos) {
		echo '
  <div class="footer-nav">
 <ul class="first">
		<li><a href="#">Cambiar Contraseña</a></li>
		<li><a href="#">Cambiar E-Mail</a></li>
		<li><a href="#">Votar</a></li>
		<li><a href="#">Mod</a></li>
		 
		 
		 </ul>
		 
		
	   <ul class="second">
  
		<li><a href="#">Tienda</a></li>
		<li><a href="#">Donar</a></li>
		<li><a href="#">Alpha Keys</a></li>
		
		</ul>
		 </div>
	';
	
			
	}	
}

?>
		 
		 </div>
	    

	  </div> 
	</div> 
<div class="clear"></div>
<?php 
    }else { 
?> 
<div class="posts_l"><a class="post_title">¡Error! Usted no puede entrar en este perfil</a>
        <p>Si usted no esta registrado es posible que no pueda ver su perfil. Registrese o entre con su cuenta.</p> 
		
		<font size="3"> Esta medida es para aumentar la seguridad en el perfil de nuestros usuarios .</font>
		<br/>
		<br/>
		<b> El registro solo te tomara unos minutos y tendras acceso a tu perfil de usuarío </b>
		
		<br/>
		<br/>
		<a href="register.php">
		<button> Registrate ahora </button>
		</a>
		</div>
<?php 
    } 
?>

