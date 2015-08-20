<?php 
    session_start(); 
    include('conexion.php'); // incluímos los datos de conexión a la BD 
    if(isset($_SESSION['usuario_nombre'])) { // comprobamos que la sesión esté iniciada 
        if(isset($_POST['enviar'])) { 
            if($_POST['usuario_clave'] != $_POST['usuario_clave_conf']) { 
                echo "Las contraseñas ingresadas no coinciden. <a href='javascript:history.back();'>Reintentar</a>"; 
            }else { 
                $usuario_nombre = $_SESSION['usuario_nombre']; 
                $usuario_clave = mysql_real_escape_string($_POST["usuario_clave"]); 
                $usuario_clave = md5($usuario_clave); // encriptamos la nueva contraseña con md5 
                $sql = mysql_query("UPDATE usuarios SET usuario_clave='".$usuario_clave."' WHERE usuario_nombre='".$usuario_nombre."'"); 
                if($sql) { 
                    echo "<div class='posts_l'><a class='post_title'> Tu contraseña ha sido cambiada </a>
					<br />
					La contraseña ha sido cambiada correctamente. 
                   Este cambio tiene efecto en el juego y en la website por lo cual tu contraseña esta cambiada en los dos sitios.
<br/>
<br/>
<br/>
					Si no ha sido así mande un post al foro de soporte tecnico
					de Reign of norrath para que nosotros lo arreglemos en el menor tiempo posible.
					<br/>
					<br/>
					<i> Atentamente </i>
					
<br/>

<br/>
					La Administración de Reign of Norrath
					<br/>
					<br/>
					<br/>
					<a href='index.php'> 
					<button> Volver al Inicio </button>
					</a>
					</div>
					"; 
                }else { 
                    echo "Error: No se pudo cambiar la contraseña. <a href='javascript:history.back();'>Reintentar</a>"; 
                } 
            } 
        }else { 
?> 

<div class="posts_l"><a class="post_title"> Modificar Contraseña <?php echo $_SESSION['usuario_nombre'];?>  </a>
<br/>
<br/>
<b> Al modificar la contraseña estas modificando los datos de acceso en la web y en el juego , asegurate que una vez cambiada la guardes
en un sitío seguro </b>

<br/>
<br/>
        <form action="<?=$_SERVER['PHP_SELF']?>" method="post"> 
        <label>Nueva Contraseña:</label><br /> 
        <input type="password"  class="form-control" name="usuario_clave" maxlength="15" /><br /> 
        <label>Confirmar contraseña:</label><br /> 
        <input type="password"  class="form-control" name="usuario_clave_conf" maxlength="15" /><br /> 
            <input type="submit" name="enviar" class="btn btn-lg btn-info"  value="Enviar" /> 
        </form> 
		</div>
<?php 
        } 
    }else { 
        echo "Acceso denegado."; 
    } 
?>