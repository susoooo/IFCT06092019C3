CREATE DATABASE `db_proyecto` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;

GRANT SELECT, INSERT, DELETE, UPDATE on db_proyecto.* to 'springuser'@'%';

USE db_proyecto;

CREATE TABLE IF NOT EXISTS `Cliente` (
  `id_cli` int NOT NULL AUTO_INCREMENT,
  `nombre_cli` varchar(255) DEFAULT NULL,
  `apellidos_cli` varchar(255) DEFAULT NULL,
  `usuario_cli` varchar(255) DEFAULT NULL,
  `email_cli` varchar(255) DEFAULT NULL,
  `contrasena_cli` varchar(255) DEFAULT NULL,
  `estado_cli` varchar(1) DEFAULT NULL,
  PRIMARY KEY (`id_cli`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `Organizador` (
  `id_org` int NOT NULL AUTO_INCREMENT,
  `nombre_org` varchar(255) DEFAULT NULL,
  `apellidos_org` varchar(255) DEFAULT NULL,
  `usuario_org` varchar(255) DEFAULT NULL,
  `email_org` varchar(255) DEFAULT NULL,
  `contrasena_org` varchar(255) DEFAULT NULL,
  `cuentaBancaria_org` varchar(255) DEFAULT NULL,
  `estado_org` varchar(1) DEFAULT NULL,
  PRIMARY KEY (`id_org`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `Categoria` (
  `id_cat` int NOT NULL AUTO_INCREMENT,
  `nombre_cat` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id_cat`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `Provincia` (
  `id_pro` int NOT NULL AUTO_INCREMENT,
  `nombre_pro` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id_pro`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `Evento` (
  `id_eve` int NOT NULL AUTO_INCREMENT,
  `nombre_eve` varchar(255) DEFAULT NULL,
  `direccion_eve` varchar(255) DEFAULT NULL,
  `aforo_eve` int DEFAULT NULL,
  `inicio_eve` date DEFAULT NULL,
  `fin_eve` date DEFAULT NULL,
  `estado_eve` varchar(1) DEFAULT NULL,
  `id_org` int,
  `id_cat` int,
  `id_pro` int,
  PRIMARY KEY (`id_eve`),
  FOREIGN KEY (`id_org`) REFERENCES `Organizador`(`id_org`),
  FOREIGN KEY (`id_cat`) REFERENCES `Categoria`(`id_cat`),
  FOREIGN KEY (`id_pro`) REFERENCES `Provincia`(`id_pro`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `Participa` (
  `id_eve` int,
  `id_cli` int,
  PRIMARY KEY (`id_eve`),
  PRIMARY KEY (`id_cli`),
  FOREIGN KEY (`id_cli`) REFERENCES `Cliente`(`id_cli`),
  FOREIGN KEY (`id_eve`) REFERENCES `Evento`(`id_eve`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

CREATE TABLE IF NOT EXISTS `Valoracion` (
  `id_val` int NOT NULL AUTO_INCREMENT,
  `comentario_val` varchar(255) DEFAULT NULL,
  `puntacion_val` int DEFAULT NULL,
  `id_eve` int,
  `id_cli` int,
  PRIMARY KEY (`id_val`),
  FOREIGN KEY (`id_cli`) REFERENCES `Cliente`(`id_cli`),
  FOREIGN KEY (`id_eve`) REFERENCES `Evento`(`id_eve`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
