/*Table structure for table `Estado` */

DROP TABLE IF EXISTS `Estado`;

CREATE TABLE `Estado` (
  `id` char(25) DEFAULT NULL,
  `Nombre` char(255) DEFAULT 'Default',
  `IP` char(255) DEFAULT NULL,
  `Port` char(25) DEFAULT NULL,
  `Estado online` char(255) DEFAULT 'Online',
  `Estado offline` char(255) DEFAULT 'Offline'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `Estado` */

/*Table structure for table `usuarios` */

DROP TABLE IF EXISTS `usuarios`;

CREATE TABLE `usuarios` (
  `usuario_id` int(4) NOT NULL AUTO_INCREMENT,
  `usuario_nombre` varchar(15) NOT NULL DEFAULT '',
  `usuario_clave` varchar(32) NOT NULL DEFAULT '',
  `usuario_email` varchar(50) NOT NULL DEFAULT '',
  `usuario_rango` varchar(50) NOT NULL DEFAULT 'user',
  `usuario_freg` datetime NOT NULL DEFAULT '0000-00-00 00:00:00',
  `usuario_estado` enum('Activo','Suspendido','','') DEFAULT 'Activo',
  PRIMARY KEY (`usuario_id`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8;


/*Table structure for table `web20_noticias` */

DROP TABLE IF EXISTS `web20_noticias`;

CREATE TABLE `web20_noticias` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `titulo` varchar(100) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL DEFAULT 'No Hay Titulo',
  `autor` varchar(50) NOT NULL DEFAULT 'Desconocido',
  `mensaje` varchar(1000) CHARACTER SET utf8 COLLATE utf8_bin NOT NULL DEFAULT 'No Hay Mensaje',
  `fecha` date NOT NULL,
  `Categoria` char(255) DEFAULT 'website',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

/*Data for the table `web20_noticias` */


/*Table structure for table `web20_razas` */

DROP TABLE IF EXISTS `web20_razas`;

CREATE TABLE `web20_razas` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `imagen_raza` varchar(200) NOT NULL,
  `Nombre` varchar(200) NOT NULL,
  `Descripción` varchar(2500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;

/*Data for the table `web20_razas` */


/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
