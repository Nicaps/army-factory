-- phpMyAdmin SQL Dump
-- version 4.6.4
-- https://www.phpmyadmin.net/
--
-- Client :  127.0.0.1
-- Généré le :  Mer 07 Décembre 2016 à 14:27
-- Version du serveur :  5.7.14
-- Version de PHP :  5.6.25

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `test_army_factory`
--

-- --------------------------------------------------------

--
-- Structure de la table `army`
--

CREATE TABLE `army` (
  `id` int(11) NOT NULL,
  `name` varchar(50) NOT NULL DEFAULT 'nameArmy',
  `cost` int(11) NOT NULL DEFAULT '0',
  `nbUnit` int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Structure de la table `equipment`
--

CREATE TABLE `equipment` (
  `id` int(11) NOT NULL,
  `name` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `equipment`
--

INSERT INTO `equipment` (`id`, `name`) VALUES
(1, 'Bolter'),
(2, 'Pistolet bolter'),
(3, 'Armure énergétique'),
(4, 'Grenades frag & antichar'),
(5, 'Armure Terminator'),
(6, 'Bolter d\'assaut'),
(7, 'Gantelet énergétique'),
(8, 'Épée énergétique'),
(9, 'Halo de fer'),
(10, 'Épée tronçonneuse');

-- --------------------------------------------------------

--
-- Structure de la table `figurines`
--

CREATE TABLE `figurines` (
  `id` int(11) NOT NULL,
  `name` varchar(50) NOT NULL DEFAULT 'nameFig',
  `CC` int(11) NOT NULL DEFAULT '4',
  `CT` int(11) NOT NULL DEFAULT '4',
  `F` int(11) NOT NULL DEFAULT '4',
  `E` int(11) NOT NULL DEFAULT '4',
  `PV` int(11) NOT NULL DEFAULT '1',
  `I` int(11) NOT NULL DEFAULT '4',
  `A` int(11) NOT NULL DEFAULT '1',
  `Cd` int(11) NOT NULL DEFAULT '8',
  `Svg` int(11) NOT NULL DEFAULT '3',
  `idType` int(11) NOT NULL,
  `isCharacter` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `figurines`
--

INSERT INTO `figurines` (`id`, `name`, `CC`, `CT`, `F`, `E`, `PV`, `I`, `A`, `Cd`, `Svg`, `idType`, `isCharacter`) VALUES
(1, 'Tactical Marine', 4, 4, 4, 4, 1, 4, 1, 8, 3, 1, 0),
(2, 'Tactical Sergeant', 4, 4, 4, 4, 1, 4, 1, 8, 3, 1, 1),
(3, 'Tactical Veteran Sergeant', 4, 4, 4, 4, 1, 4, 2, 9, 3, 1, 1),
(4, 'Terminator Marine', 4, 4, 4, 4, 1, 4, 2, 9, 2, 1, 0),
(5, 'Terminator Sergeant', 4, 4, 4, 4, 1, 4, 2, 9, 2, 1, 1),
(6, 'Company Captain', 6, 5, 4, 4, 3, 5, 3, 10, 3, 1, 1);

-- --------------------------------------------------------

--
-- Structure de la table `figurine_equipment`
--

CREATE TABLE `figurine_equipment` (
  `idFigurine` int(11) NOT NULL,
  `idEquipment` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `figurine_equipment`
--

INSERT INTO `figurine_equipment` (`idFigurine`, `idEquipment`) VALUES
(1, 1),
(1, 2),
(1, 3),
(1, 4),
(2, 1),
(2, 2),
(2, 3),
(2, 4),
(3, 1),
(3, 2),
(3, 3),
(3, 4),
(4, 5),
(4, 6),
(4, 7),
(5, 5),
(5, 6),
(5, 8),
(6, 9),
(6, 10),
(6, 3),
(6, 4),
(6, 2);

-- --------------------------------------------------------

--
-- Structure de la table `options`
--

CREATE TABLE `options` (
  `id` int(11) NOT NULL,
  `idUnit` int(11) NOT NULL,
  `name` varchar(50) DEFAULT NULL,
  `text` text,
  `cost` int(11) NOT NULL DEFAULT '0',
  `wargearList` tinyint(1) NOT NULL DEFAULT '0',
  `assignedTransport` tinyint(1) NOT NULL DEFAULT '0',
  `groupeOption` int(11) DEFAULT NULL,
  `headerOpt` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `options`
--

INSERT INTO `options` (`id`, `idUnit`, `name`, `text`, `cost`, `wargearList`, `assignedTransport`, `groupeOption`, `headerOpt`) VALUES
(1, 1, 'tactSquad_addMarine', 'Ajouter jusqu\'à 5 Space Marine', 14, 0, 0, NULL, 0),
(2, 1, 'tactSquad_addSpecWeapLess10', 'Si l\'escouade est composée de moins de 10 figurines, 1 Space Marine maximum peut recevoir un objet de la liste des Armes Spéciales ou de de celle des Armes Lourdes.', 0, 1, 0, NULL, 0),
(3, 1, 'tactSquad_addSpecWeapFor10', 'Si l\'escouade est composée de 10 figurines, 1 Space Marine peut recevoir un objet de la liste des Armes Spéciales, et 1 autre Space Marine peut recevoir un objet de la liste des Armes Lourdes.', 0, 1, 0, NULL, 0),
(4, 1, 'tactSquad_veteranSergeant', 'Promouvoir le Sergent en Sergent Vétéran.', 10, 0, 0, NULL, 0),
(5, 1, 'tactSquad_sergeantOpt1', 'Le Sergent/Sergent Vétéran peut remplacer son bolter et/ou son pistolet bolter par une épée tronçonneuse.', 0, 0, 0, NULL, 0),
(6, 1, 'tactSquad_sergeantOpt2', 'Le Sergent/Sergent Vétéran peut recevoir des objets des listes Armes de Mêlée et/ou Armes de Tir.', 0, 1, 0, NULL, 0),
(7, 1, 'tactSquad_sergeantOpt3', 'Le Sergent/Sergent Vétéran peut recevoir des bombes à fusion.', 5, 0, 0, NULL, 0),
(8, 1, 'tactSquad_sergeantOpt4', 'Le Sergent/Sergent Vétéran peut recevoir une balise de téléportation.', 10, 0, 0, NULL, 0),
(9, 1, 'tactSquad_assTrans', 'L\'escouade peut prendre un transport assigné : module d\'atterrissage, Rhino ou Razorback.', 0, 0, 1, NULL, 0),
(10, 2, 'termSquad_addTerm', 'Ajouter jusqu\'à 5 Terminators.', 40, 0, 0, NULL, 0),
(11, 2, 'termSquad_chainfist', 'Toute figurine peut remplacer son gantelet énergétique par un point tronçonneur.', 5, 0, 0, NULL, 0),
(12, 2, 'termSquad_headerOpt1', 'Pour chaque tranche de 5 figurines que compte l\'escouade, 1 Terminator peut sélectionner l\'une des options suivantes :', 0, 0, 0, 1, 1),
(13, 2, 'termSquad_weapOp1', 'Remplacer son bolter d\'assaut par un lance-flammes lourd.', 10, 0, 0, 1, 0),
(14, 2, 'termSquad_weapOp2', 'Remplacer son bolter d\'assaut par un canon d\'assaut.', 20, 0, 0, 1, 0),
(15, 2, 'termSquad_weapOp3', 'Prendre un lance-missiles Cyclone.', 25, 0, 0, 1, 0),
(16, 2, 'termSquad_landRaider', 'Peut prendre un Land Raider de n\'importe quel type comme Transport Assigné.', 0, 0, 1, NULL, 0);

-- --------------------------------------------------------

--
-- Structure de la table `role`
--

CREATE TABLE `role` (
  `id` int(11) NOT NULL,
  `name` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `role`
--

INSERT INTO `role` (`id`, `name`) VALUES
(1, 'Q.G.'),
(2, 'Élite'),
(3, 'Troupe'),
(4, 'Attaque Rapide'),
(5, 'Soutien'),
(6, 'Transport assigné');

-- --------------------------------------------------------

--
-- Structure de la table `specialrule`
--

CREATE TABLE `specialrule` (
  `id` int(11) NOT NULL,
  `name` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `specialrule`
--

INSERT INTO `specialrule` (`id`, `name`) VALUES
(1, 'Escouades de Combat'),
(2, 'Et Ils Ne Connaîtront Pas La Peur'),
(3, 'Tactiques de Chapitre'),
(4, 'Personnage Indépendant');

-- --------------------------------------------------------

--
-- Structure de la table `type`
--

CREATE TABLE `type` (
  `id` int(11) NOT NULL,
  `name` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `type`
--

INSERT INTO `type` (`id`, `name`) VALUES
(1, 'Infanterie');

-- --------------------------------------------------------

--
-- Structure de la table `unit`
--

CREATE TABLE `unit` (
  `id` int(11) NOT NULL,
  `idArmy` int(11) DEFAULT NULL,
  `idRole` int(11) NOT NULL,
  `name` varchar(50) NOT NULL DEFAULT 'nameUnit',
  `cost` int(11) NOT NULL DEFAULT '0',
  `nbFig` int(11) NOT NULL DEFAULT '0',
  `isBase` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `unit`
--

INSERT INTO `unit` (`id`, `idArmy`, `idRole`, `name`, `cost`, `nbFig`, `isBase`) VALUES
(1, NULL, 3, 'Tactical Squad', 70, 5, 1),
(2, NULL, 2, 'Terminator Squad', 200, 5, 1),
(3, NULL, 1, 'Company Captain', 90, 1, 1);

--
-- Déclencheurs `unit`
--
DELIMITER $$
CREATE TRIGGER `trig_add_unitToArmy` AFTER INSERT ON `unit` FOR EACH ROW UPDATE `army`
SET `army`.`cost` = `army`.`cost` + NEW.cost, `army`.`nbUnit`= `army`.`nbUnit` +1
WHERE `army`.`id` = NEW.idArmy
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `trig_changeUnit` AFTER UPDATE ON `unit` FOR EACH ROW IF NEW.idArmy = OLD.idArmy
THEN UPDATE `army`
SET `army`.`cost`=  `army`.`cost` - OLD.cost + NEW.COST
WHERE `army`.`id` = NEW.idArmy;
ELSE UPDATE `army`
SET `army`.`cost` = `army`.`cost` - OLD.cost, `army`.`nbUnit` =  `army`.`nbUnit` -1
WHERE `army`.`id` = OLD.idArmy;
UPDATE `army`
SET `army`.`cost` = `army`.`cost` + NEW.cost, `army`.`nbUnit` =  `army`.`nbUnit` +1
WHERE `army`.`id` = NEW.idArmy;
END IF
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `trig_delUnit` BEFORE DELETE ON `unit` FOR EACH ROW BEGIN
UPDATE `army` SET `army`.`cost` = `army`.`cost` - OLD.cost, `army`.`nbUnit` = `army`.`nbUnit` -1 WHERE `army`.`id` = OLD.idArmy;
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Structure de la table `unit_figurine`
--

CREATE TABLE `unit_figurine` (
  `idUnit` int(11) NOT NULL,
  `idFigurine` int(11) NOT NULL,
  `nbFigurines` int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `unit_figurine`
--

INSERT INTO `unit_figurine` (`idUnit`, `idFigurine`, `nbFigurines`) VALUES
(1, 1, 4),
(1, 2, 1),
(2, 4, 4),
(2, 5, 1),
(3, 6, 1);

-- --------------------------------------------------------

--
-- Structure de la table `unit_specialrule`
--

CREATE TABLE `unit_specialrule` (
  `idUnit` int(11) NOT NULL,
  `idSpecialRule` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Contenu de la table `unit_specialrule`
--

INSERT INTO `unit_specialrule` (`idUnit`, `idSpecialRule`) VALUES
(1, 1),
(1, 2),
(1, 3),
(2, 1),
(2, 2),
(2, 3),
(3, 2),
(3, 3),
(3, 4);

--
-- Index pour les tables exportées
--

--
-- Index pour la table `army`
--
ALTER TABLE `army`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `equipment`
--
ALTER TABLE `equipment`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `figurines`
--
ALTER TABLE `figurines`
  ADD PRIMARY KEY (`id`),
  ADD KEY `typeId` (`idType`);

--
-- Index pour la table `figurine_equipment`
--
ALTER TABLE `figurine_equipment`
  ADD KEY `idFigurine` (`idFigurine`),
  ADD KEY `idEquipment` (`idEquipment`);

--
-- Index pour la table `options`
--
ALTER TABLE `options`
  ADD PRIMARY KEY (`id`),
  ADD KEY `idUnit` (`idUnit`);

--
-- Index pour la table `role`
--
ALTER TABLE `role`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `specialrule`
--
ALTER TABLE `specialrule`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `type`
--
ALTER TABLE `type`
  ADD PRIMARY KEY (`id`);

--
-- Index pour la table `unit`
--
ALTER TABLE `unit`
  ADD PRIMARY KEY (`id`),
  ADD KEY `idArmy` (`idArmy`),
  ADD KEY `idRole` (`idRole`);

--
-- Index pour la table `unit_figurine`
--
ALTER TABLE `unit_figurine`
  ADD KEY `idUnit` (`idUnit`),
  ADD KEY `idFigurine` (`idFigurine`);

--
-- Index pour la table `unit_specialrule`
--
ALTER TABLE `unit_specialrule`
  ADD KEY `idUnit` (`idUnit`),
  ADD KEY `idSpecialRule` (`idSpecialRule`);

--
-- AUTO_INCREMENT pour les tables exportées
--

--
-- AUTO_INCREMENT pour la table `army`
--
ALTER TABLE `army`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT pour la table `equipment`
--
ALTER TABLE `equipment`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
--
-- AUTO_INCREMENT pour la table `figurines`
--
ALTER TABLE `figurines`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
--
-- AUTO_INCREMENT pour la table `options`
--
ALTER TABLE `options`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;
--
-- AUTO_INCREMENT pour la table `role`
--
ALTER TABLE `role`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
--
-- AUTO_INCREMENT pour la table `specialrule`
--
ALTER TABLE `specialrule`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
--
-- AUTO_INCREMENT pour la table `type`
--
ALTER TABLE `type`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
--
-- AUTO_INCREMENT pour la table `unit`
--
ALTER TABLE `unit`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
--
-- Contraintes pour les tables exportées
--

--
-- Contraintes pour la table `army`
--
ALTER TABLE `army`
  ADD CONSTRAINT `army_ibfk_1` FOREIGN KEY (`id`) REFERENCES `unit` (`idArmy`);

--
-- Contraintes pour la table `figurines`
--
ALTER TABLE `figurines`
  ADD CONSTRAINT `fk_fig_idType` FOREIGN KEY (`idType`) REFERENCES `type` (`id`);

--
-- Contraintes pour la table `figurine_equipment`
--
ALTER TABLE `figurine_equipment`
  ADD CONSTRAINT `fk_figurine_equipment_idEquipment` FOREIGN KEY (`idEquipment`) REFERENCES `equipment` (`id`),
  ADD CONSTRAINT `fk_figurine_equipment_idFigurine` FOREIGN KEY (`idFigurine`) REFERENCES `figurines` (`id`);

--
-- Contraintes pour la table `options`
--
ALTER TABLE `options`
  ADD CONSTRAINT `fk_option_idUnit` FOREIGN KEY (`idUnit`) REFERENCES `unit` (`id`);

--
-- Contraintes pour la table `unit`
--
ALTER TABLE `unit`
  ADD CONSTRAINT `fk_role_id` FOREIGN KEY (`idRole`) REFERENCES `role` (`id`);

--
-- Contraintes pour la table `unit_figurine`
--
ALTER TABLE `unit_figurine`
  ADD CONSTRAINT `fk_unit_figurine_idFigurine` FOREIGN KEY (`idFigurine`) REFERENCES `figurines` (`id`),
  ADD CONSTRAINT `fk_unit_figurine_idUnit` FOREIGN KEY (`idUnit`) REFERENCES `unit` (`id`);

--
-- Contraintes pour la table `unit_specialrule`
--
ALTER TABLE `unit_specialrule`
  ADD CONSTRAINT `fk_unit_specialRule_idRule` FOREIGN KEY (`idSpecialRule`) REFERENCES `specialrule` (`id`),
  ADD CONSTRAINT `fk_unit_specialRule_idUnit` FOREIGN KEY (`idUnit`) REFERENCES `unit` (`id`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
