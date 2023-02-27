

create database GestionProjet
go
use GestionProjet
go

create table DEPARTEMENT
(
    code_dept nchar(5) not null,
    nom_dept nvarchar(40) null,
    bureau char(5) null,
    telephone char(12) null,
    chef_dept char(5) null,
    code_fac char(4) null,
    date_prise_fonction datetime null,
    Constraint PK_code_dept primary key (code_dept)
)

create table FACULTE
(
    code_fac char(4) not null,
    nom_fac nvarchar(40) null,
    annee_creation int null,
    bureau char(5) null,
    telephone varchar(12) null,
    chef_fac nchar(5) null,
    date_prise_fonction datetime null,
    Constraint PK_code_fac primary key (code_fac)
)

create table FAMILLE 
(
    code_ens char(5) not null,
    nom nvarchar(20) not null,
    date_de_naissance datetime null,
    genre nchar(3) null,
    Constraint PK_code_ens_nom primary key(code_ens, nom)
)

create table ENSEIGNANT
(
    code_ens char(5) not null,
    nom_et_prenom nvarchar(40) null,
    salaire float null,
    genre nchar(3) null,
    date_de_naissance datetime null,
    adresse nvarchar(100) null,
    superviseur_direct char(5) null,
    code_dept nchar(5) null,
	Constraint PK_code_ens primary key(code_ens)
)

create table ENSEIGNANT_PHONE
(   
    code_ens char(5) not null,
    telephone char(12) not null,
    Constraint PK_code_ens_telephone primary key(code_ens,telephone)
)
create table SUJET
(
    code_suj char(3) not null,    
    nom_suj nvarchar(100),
    niveau nvarchar(40) null,
    budget float null,
    date_de_debut datetime null,
    date_de_fin datetime null,
    code_dom nchar(4) null,
    responsable nchar(5) null,
    Constraint PK_code_suj primary key (code_suj)
)

create table DOMAINE
(
    code_dom nchar(4) not null,
    nom_dom nvarchar(50) null,
    Constraint PK_code_dom primary key (code_dom)

)
create table TACHE
(
    code_suj char(3) not null,
    numero int default(1) not null,
    nom_tache nvarchar(40) null,
    date_de_debut datetime null,
    date_de_fin datetime null,
    Constraint PK_code_suj_nummero primary key (code_suj,numero)
)
create table AFFECTATION
(
    code_suj char(3) not null,
    code_ens char(5) not null,
    numero int not null,
    allocation float null,
    resultat nvarchar(40) null,
    Constraint PK_code_suj_code_ens_numero primary key (code_suj,code_ens,numero)
)


Alter table DEPARTEMENT
Add constraint FK_code_dept_code_fac 
foreign key(code_fac)  
references FACULTE(code_fac)


Alter table DEPARTEMENT
Add constraint FK_code_dept_code_ens
foreign key(chef_dept)  
references ENSEIGNANT(code_ens)


Alter table  FACULTE
Add constraint FK_code_fac_code_ens
foreign key(chef_fac)
references  ENSEIGNANT(code_ens)

Alter table ENSEIGNANT
Add constraint FK_code_ens_code_dept 
foreign key(code_dept)
references DEPARTEMENT(code_dept)


Alter table ENSEIGNANT
Add constraint  FK_code_ens_code_ens
foreign key(superviseur_direct)
references ENSEIGNANT(code_ens)

Alter table ENSEIGNANT_PHONE
Add constraint FK_phone_ens
foreign key(code_ens)
references ENSEIGNANT(code_ens)

Alter table FAMILLE
Add constraint FK_famille_ens
foreign key(code_ens)
references ENSEIGNANT(code_ens)
----------------------------------------------------
Alter table SUJET
Add constraint FK_code_dom_code_dom
foreign key(code_dom)
references DOMAINE(code_dom)

Alter table TACHE
Add constraint FK_code_suj_code_suj
foreign key(code_suj)
references SUJET(code_suj)

Alter table AFFECTATION
Add constraint FK_aff_tache
foreign key (code_suj, numero)
references TACHE(code_suj, numero)

Alter table AFFECTATION
Add constraint FK_aff_ens
foreign key (code_ens)
references ENSEIGNANT(code_ens) 




insert into DOMAINE values('TH', N'Toán học')
insert into DOMAINE values('HH', N'Hóa học')
insert into DOMAINE values(N'ĐCH', N'Địa chất học')
insert into DOMAINE values('VLH', N'Vật lý học')

insert into ENSEIGNANT values('001', N'Vũ Huyền Thiên Lý', 13000, 'F', '7/13/2003', N'Quận 10', NULL, NULL)
insert into ENSEIGNANT values('002', N'Nguyễn Ngọc Khánh', 12000, 'M', '7/29/2003', N'Quận 8', NULL, NULL)
insert into ENSEIGNANT values('003', N'Trần Bảo Nguyên', 9000, 'M', '1/20/2003', N'Bình Thạnh', NULL, NULL)
insert into ENSEIGNANT values('004', N'Vũ Thành Công', 13500, 'M', '9/1/2003', N'Hóc Môn', NULL, NULL)
insert into ENSEIGNANT values('005', N'Võ Diệp Phi Vũ', 12000, 'M', '10/11/2003', N'Bình Tân', NULL, NULL)


insert into DEPARTEMENT values('HHC', N'Hóa Hữu Cơ', 'F205', '0912300321', NULL, NULL, '3/2/2001')
insert into DEPARTEMENT values(N'TƯD', N'Toán Ứng Dụng', 'C402', '0934500543', NULL, NULL, '5/27/2001')
insert into DEPARTEMENT values('VLKT', N'Vật Lý Điện Tử', 'B11A', '0956700765', NULL, NULL, '8/14/2001')
insert into DEPARTEMENT values(N'KTĐC', N'Kỹ Thuật Địa Chất', 'E305', '0978900987', NULL, NULL, '12/1/2001')

insert into FACULTE values('FOP', N'Khoa Vật Lý', 2000, 'B1', '09246466', NULL, '8/13/2001')
insert into FACULTE values('FMC', N'Khoa Toán-Tin học', 2000, 'C4', '352345324', NULL, '8/28/2001')
insert into FACULTE values('FOC', N'Khoa Hóa Học', 2000, 'F2', '09122354324', NULL, '3/6/2001')
insert into FACULTE values('FOG', N'Khoa Địa Chất', 2000, 'E3', '0978900987', NULL, '1/7/2001')

update ENSEIGNANT set code_dept='HHC', superviseur_direct='001' where code_ens='002'
update ENSEIGNANT set code_dept=N'TƯD', superviseur_direct='003' where code_ens='004'
update ENSEIGNANT set code_dept='VLKT', superviseur_direct='005' where code_ens='001'
update ENSEIGNANT set code_dept=N'KTĐC', superviseur_direct='004' where code_ens='003'

update DEPARTEMENT set chef_dept='001', code_fac='FOC' where code_dept='HHC'
update DEPARTEMENT set chef_dept='003', code_fac='FMC' where code_dept=N'TƯD'
update DEPARTEMENT set chef_dept='005', code_fac='FOP' where code_dept='VLKT'
update DEPARTEMENT set chef_dept='004', code_fac='FOG' where code_dept=N'KTĐC'

update FACULTE set chef_fac='001' where code_fac='FOC'
update FACULTE set chef_fac='003' where code_fac='FMC'
update FACULTE set chef_fac='005' where code_fac='FOP'
update FACULTE set chef_fac='004' where code_fac='FOG'

insert into FAMILLE values('001', N'Mai Anh Tới', '7/1/1968', 'F')
insert into FAMILLE values('002', N'Nguyễn Hoàng Anh', '1/13/2001', 'M')
insert into FAMILLE values('003', N'Đỗ Thùy Diễm ', '3/7/2014', 'F')
insert into FAMILLE values('004', N'Nguyễn Ngọc Khánh', '2/7/2004', 'F')
insert into FAMILLE values('005', N'Nguyễn Ngọc Ngạn Rảnh', '12/5/1970', 'M')

insert into ENSEIGNANT_PHONE values('001', '0741234132')
insert into ENSEIGNANT_PHONE values('002', '0123454043')
insert into ENSEIGNANT_PHONE values('003', '08337850054')
insert into ENSEIGNANT_PHONE values('004', '0487560065')
insert into ENSEIGNANT_PHONE values('005', '0123450076')

insert into SUJET values('VTP', N'Vi Tích Phân', N'Năm 1', 1300, '9/2/2021', '12/14/2021', 'TH','005')
insert into SUJET values(N'LĐC', N'Lý Đại Cương', N'Năm 1', 1200, '9/2/2021', '12/14/2021', 'VLH','003')
insert into SUJET values('HHP', N'Hóa Học Polymer', N'Năm 3', 2400, '2/2/2024', '5/2/2024', 'HH','001')
insert into SUJET values('KVH', N'Khoáng Vật Học', N'Năm 2', 1300, '2/2/2023', '5/2/2023', N'ĐCH','004')

insert into TACHE values(N'LĐC', 1, N'Cơ Điện Tử', '9/2/2021', '12/14/2021')
insert into TACHE values('HHP', 2, N'Kết cấu', '2/2/2024', '5/2/2024')
insert into TACHE values('KVH', 3, N'Phân loại khoáng vật', '2/2/2023', '5/2/2023')
insert into TACHE values('VTP', 4, N'Tích Phân', '9/2/2021', '12/14/2021')

insert into AFFECTATION values('001', 'HHP', 2, 9, 'PASS')
insert into AFFECTATION values('003', 'KVH', 3, 9, 'PASS')
insert into AFFECTATION values('004', N'LĐC', 1, 9, 'PASS')
insert into AFFECTATION values('005', 'VTP', 4, 9, 'PASS')
