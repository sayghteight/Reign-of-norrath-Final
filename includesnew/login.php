<?php 
    session_start(); 
    include('conexion.php'); 
include('modulesnew/tables_conexion.php');
if(login_active == No) {
header('Location:/error/login_no_active.php');
}
else {
// do nothing
}
    // comprobamos que se haya iniciado la sesión 
    if(isset($_SESSION['usuario_nombre'])) { 
	
    $perfil = mysql_query("SELECT * FROM ".$db_usuarios." WHERE usuario_nombre='".$_SESSION['usuario_nombre']."'") or die(mysql_error()); 
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

 <div id="quicklogin-bg">
  <div id="ql-text"> 
	<div class="realm-name">¡ Aventurero ! Bienvenido de nuevo </div> 

	<a href='perfil.php?id=<?php echo $_SESSION['usuario_nombre'];?>'><div class='readmore'><div class='readmore-text'>Tu Perfil</div></div></a>
       </div>
	   
	   </div>


	

<?php 
    }else { 
        echo "
		
 <div id='quicklogin-bg'>
	<form class='membership' action='/modulesnew/login_val.php' method='post' name='login_form'>
	<div id='ql-text'>Conectarse:</div>
	<input type='text' placeholder='Tu Usuario' id='name' class='username-input' name='usuario_nombre'>
	<input type='password' class='password-input' name='usuario_clave'>
	<input type='submit' value='login' name='enviar' class='login-button'>
	</form>
	<div class='forgotpw'><a href='#'>Olvidates la Contraseña?</a></div>
      </div>
				  
					
			
"; 
 } 
?>			  