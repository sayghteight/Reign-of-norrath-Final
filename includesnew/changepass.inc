<?php 
    session_start(); 
    include('conexion.php'); // inclu�mos los datos de conexi�n a la BD 
    if(isset($_SESSION['usuario_nombre'])) { // comprobamos que la sesi�n est� iniciada 
        if(isset($_POST['enviar'])) { 
            if($_POST['usuario_clave'] != $_POST['usuario_clave_conf']) { 
                echo "Las contrase�as ingresadas no coinciden. <a href='javascript:history.back();'>Reintentar</a>"; 
            }else { 
                $usuario_nombre = $_SESSION['usuario_nombre']; 
                $usuario_clave = mysql_real_escape_string($_POST["usuario_clave"]); 
                $usuario_clave = md5($usuario_clave); // encriptamos la nueva contrase�a con md5 
                $sql = mysql_query("UPDATE usuarios SET usuario_clave='".$usuario_clave."' WHERE usuario_nombre='".$usuario_nombre."'"); 
                if($sql) { 
                    echo "<div class='posts_l'><a class='post_title'> Tu contrase�a ha sido cambiada </a>
					<br />
					La contrase�a ha sido cambiada correctamente. 
                   Este cambio tiene efecto en el juego y en la website por lo cual tu contrase�a esta cambiada en los dos sitios.
<br/>
<br/>
<br/>
					Si no ha sido as� mande un post al foro de soporte tecnico
					de Reign of norrath para que nosotros lo arreglemos en el menor tiempo posible.
					<br/>
					<br/>
					<i> Atentamente </i>
					
<br/>

<br/>
					La Administraci�n de Reign of Norrath
					<br/>
					<br/>
					<br/>
					<a href='index.php'> 
					<button> Volver al Inicio </button>
					</a>
					</div>
					"; 
                }else { 
                    echo "Error: No se pudo cambiar la contrase�a. <a href='javascript:history.back();'>Reintentar</a>"; 
                } 
            } 
        }else { 
?> 

<div class="posts_l"><a class="post_title"> Modificar Contrase�a <?php echo $_SESSION['usuario_nombre'];?>  </a>
<br/>
<br/>
<b> Al modificar la contrase�a estas modificando los datos de acceso en la web y en el juego , asegurate que una vez cambiada la guardes
en un sit�o seguro </b>

<br/>
<br/>
        <form action="<?=$_SERVER['PHP_SELF']?>" method="post"> 
        <label>Nueva Contrase�a:</label><br /> 
        <input type="password"  class="form-control" name="usuario_clave" maxlength="15" /><br /> 
        <label>Confirmar contrase�a:</label><br /> 
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