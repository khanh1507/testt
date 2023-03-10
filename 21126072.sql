create database GestionProjet
go
use GestionProjet
go

create table GIAOVIEN (
	MAGV char( 5), 
	HOTEN nvarchar(40), 
	LUONG float, 
	PHAI nchar(3), 
	NGSINH datetime, 
	DIACHI nvarchar(100), 
	GVQLCM char(5), 
	MABM nchar(5),
	primary key (MAGV),
	
	
)
create table GV_DT (
	MAGV char(5), 
	DIENTHOAI char(12),
	primary key (MAGV,DIENTHOAI),
)
create table BOMON (
	MABM nchar(5),
	TENBM nvarchar(40), 	 
	PHONG char(5),
	DIENTHOAI char(12), 
	TRUONGBM char(5), 
	MAKHOA char(4), 	
	NGAYNHANCHUC datetime,
	primary key (MABM),
    
)
create table KHOA (
	MAKHOA char(4), 
	TENKHOA nvarchar(40), 
	NAMTL int, 
	PHONG char(5), 
	DIENTHOAI char(12), 	
	TRUONGKHOA char(5), 
	NGAYNHANCHUC datetime,
	primary key (MAKHOA),
    
)
create table DETAI (
	MADT char(3), 
	TENDT nvarchar(100), 
	CAPQL nvarchar(40), 
	KINHPHI float, 
	NGAYBD datetime, 
	NGAYKT datetime, 	
	MACD nchar(4),
	GVCNDT char(5), 	
	primary key (MADT),
	
)
create table CHUDE (
	MACD nchar(4), 
	TENCD nvarchar(50),
	primary key (MACD),
	
)
create table CONGVIEC (
	MADT char(3), 
	SOTT int, 
	TENCV nvarchar(40), 
	NGAYBD datetime, 
	NGAYKT datetime,
	primary key (MADT,SOTT),
	
)
create table THAMGIADT( 
	MAGV char(5), 
	MADT char(3), 
	STT int, 
	PHUCAP float , 
	KETQUA nvarchar(40),
	primary key (MAGV,MADT,STT),
	
)
create table NGUOITHAN (
	MAGV char(5), 
	TEN nvarchar(20), 
	NGSINH datetime, 
	PHAI nchar(3),
	primary key (MAGV,TEN),
	
)


Alter table KHOA
add constraint FK_KHOA_GIAOVIEN 
foreign key (TRUONGKHOA) 
references GIAOVIEN(MAGV)

Alter table BOMON
add constraint FK_BOMON_GIAOVIEN
foreign key(MABM)
references GIAOVIEN(MAGV)

Alter table BOMON
add constraint FK_BOMON_KHOA
foreign key(MAKHOA)
references KHOA(MAKHOA)

Alter table GIAOVIEN
add constraint FK_GIAOVIEN_GIAOVIEN
foreign key(GVQLCM)
references GIAOVIEN(MAGV)

Alter table GV_DT
add constraint FK_GV_DT_GIAOVIEN
foreign key(MAGV)
references GIAOVIEN(MAGV)

Alter table NGUOITHAN
add constraint FK_NGUOITHAN_GIAOVIEN
foreign key(MAGV)
references GIAOVIEN(MAGV)


Alter table DETAI
add constraint FK_DETAi_GIAOVIEN
foreign key(GVCNDT)
references GIAOVIEN(MAGV)

Alter table DETAI
add constraint FK_DETAI_CHUDE
foreign key(MACD)
references CHUDE(MACD)

Alter table CONGVIEC
add constraint FK_CONGVIEC_DETAI
foreign key(MADT)
references DETAI(MADT)

Alter table THAMGIADT
add constraint FK_THAMGIADT_CONGVIEC
foreign key(MADT)
references CONGVIEC(MADT)

Alter table THAMGIADT
add constraint FK_THAMGIADT_GIAOVIEN
foreign key(MAGV)
references GIAOVIEN(MAGV)


insert into GIAOVIEN (MAGV, HOTEN, LUONG, PHAI, NGSINH, DIACHI, GVQLCM, MABM) values 
('001', N'Nguy???n Ho??i An', '2000', N'Nam', '1973-02-15', N'25/3 L???c Long Qu??n, Q.10, TP HCM', NULL, NULL), 
('002', N'Tr???n Tr?? H????ng', '2500', N'N???', '1960-06-20', N'125 Tr???n H??ng ?????o, Q.1,TP HCM', NULL, NULL), 
('003', N'Nguy???n Ng???c ??nh', '2200', N'N???', '1975-05-11', N'12/21 V?? V??n Ng??n Th??? ?????c, TP HCM', NULL, NULL), 
('004', N'Tr????ng Nam S??n', '2300', N'Nam', '1959-06-20', N'215 L?? Th?????ng Ki???t,TP Bi??n H??a', NULL, NULL), 
('005', N'L?? Ho??ng H??', '2500', N'Nam', '1954-10-23', N'22/5 Nguy???n X??, Q.B??nh Th???nh, TP HCM', NULL, NULL), 
('006', N'Tr???n B???ch Tuy???t', '1500', N'N???', '1980-05-20', N'127 H??ng V????ng, TP M??? Tho', NULL, NULL), 
('007', N'Nguy???n An Trung', '2100', N'Nam', '1976-06-05', N'234 3/2, TP Bi??n H??a', NULL, NULL), 
('008', N'Tr???n Trung Hi???u', '1800', N'Nam', '1977-08-06', N'22/11 L?? Th?????ng Ki???t, TP M??? Tho', NULL, NULL), 
('009', N'Tr???n Ho??ng Nam', '2000', N'Nam', '1975-11-22', N'234 Tr???n N??o, An Ph??,TP HCM', NULL, NULL), 
('010', N'Ph???m Nam Thanh', '1500', N'Nam', '1980-12-12', N'221 H??ng V????ng, Q.5, TP HCM', NULL, NULL)

insert into KHOA (MAKHOA, TENKHOA, NAMTL, PHONG, DIENTHOAI, TRUONGKHOA, NGAYNHANCHUC) values
('CNTT', N'C??ng ngh??? th??ng tin', 1995, 'B11', '0838123456', NULL, '2005-02-20'),
('HH', N'H??a h???c', 1980, 'B41', '0838456456', NULL, '2001-10-15'),
('SH', N'Sinh h???c', 1980, 'B31', '0838454545', NULL, '2005-10-11'),	
('VL', N'V???t l??', 1976, 'B21', '0838223223', NULL, '2005-09-18')

insert into BOMON (MABM, TENBM, PHONG, DIENTHOAI, TRUONGBM, MAKHOA, NGAYNHANCHUC) values
('CNTT', N'C??ng ngh??? tri th???c', 'B15', '0838126126', NULL, NULL, NULL), 
('HHC', N'H??a h???u c??', 'B44', '838222222', NULL, NULL, NULL), 
('HL', N'H??a l??', 'B42', '0838878787', NULL, NULL, NULL),
('HPT', N'H??a ph??n t??ch', 'B43', '0838777777', NULL, NULL, '2007-10-15'), 
('HTTT', N'H??? th???ng th??ng tin', 'B13', '0838125125', NULL, NULL, '2004-09-20'), 
('MMT', N'M???ng m??y t??nh', 'B16', '0838676767', NULL, NULL, '2005-05-15'), 
('SH', N'Sinh h??a', 'B33', '0838898989', NULL, NULL, NULL), 
('VL??T', N'V???t l?? ??i???n t???', 'B23', '0838234234', NULL, NULL, NULL), 
('VL??D', N'V???t l?? ???ng d???ng', 'B24', '0838454545', NULL, NULL, '2006-02-18'), 
('VS', N'Vi sinh', 'B32', '0838909090', NULL, NULL, '2007-01-01')

insert into CONGVIEC(MADT, SOTT, TENCV, NGAYBD, NGAYKT) values 
('001', 1,N'Kh???i t???o v?? L???p k??? ho???ch', ' 2007-10-20', '2008-12-21'), 
('001',2, N'X??c ?????nh y??u c???u', '2008-12-21', '2008-03-22'), 
('001',3, N'Ph??n t??ch h??? th???ng', '2008-03-22', '2008-05-22'),
('001', 4,N'Thi???t k??? h??? th???ng', '2008-05-23', '2008-06-23'),
('001', 5,N'C??i ?????t th??? nghi???m', '2008-06-24', '2008-10-20'), 
('002', 1,N'Kh???i t???o v?? L???p k??? ho???ch', '2009-05-10', '2009-07-10'), 
('002', 2,N'X??c ?????nh y??u c???u', '2009-07-11', '2009-10-11'), 
('002', 3,N'Ph??n t??ch h??? th???ng', '2009-10-12', '2009-12-20'), 
('002', 4,N'Thi???t k??? h??? th???ng', '2009-12-21', '20010-03-22'), 
('001', 5,N'C??i ?????t th??? nghi???m', '2010-03-23', '2010-05-10'), 
('006', 1,N'L???y m???u', '2006-10-20', '2007-02-20'), 
('006', 2,N'Nu??i c???y', '2007-02-21', '2008-08-21')

insert into THAMGIADT(MAGV, MADT, STT, PHUCAP, KETQUA) values
('001', '002', 1, 0.0, NULL),
('001', '002', 2, 2.0, NULL),
('002', '001', 4, 2.0, N'?????t'),
('003', '001', 1, 1.0, N'?????t'),
('003', '001', 2, 0.0, N'?????t'),
('003', '001', 4, 1.0, N'?????t'),
('003', '002', 2, 0.0, NULL),
('004', '006', 1, 0.0, N'?????t'),
('004', '006', 2, 1.0, N'?????t'),
('006', '006', 2, 1.5, N'?????t'),
('009', '002', 3, 0.5, NULL)

insert into NGUOITHAN(MAGV, TEN, NGSINH, PHAI) values
('001', N'H??ng', '1990-01-14', N'Nam'),
('001', N'Th???y', '1994-12-08', N'N???'),
('003', N'H??', '1998-09-03', N'N???'),
('003', N'Thu', '1998-09-03', N'N???'),
('007', N'Mai', '2003-03-26', N'N???'),
('007', N'Vy', '2000-02-14', N'N???'),
('008', N'Nam', '1991-05-06', N'Nam'),
('009', N'An', '1996-08-19', N'Nam'),
('010', N'Nguy???t', '2006-01-14', N'N???')

insert into CHUDE(MACD, TENCD) values
(N'NCPT', N'Nghi??n c???u ph??t tri???n'),
(N'QLGD', N'Qu???n l?? gi??o d???c'),
(N'??DCN', N'???ng d???ng c??ng ngh???')

insert into DETAI(MADT, CAPQL, KINHPHI, NGAYBD, NGAYKT, MACD, GVCNDT) values
('001', N'HTTT qu???n l?? c??c tr?????ng ??H', N'??HQG', 20.0, '2007-10-20', '2008-10-20', N'QLGD', '002'),
('002', N'HTTT qu???n l?? gi??o v??? cho m???t khoa', N'Tr?????ng', 20.0, '2000-10-12', '2001-10-12', N'QLGD', '002'),
('003', N'Nghi??n c???u ch??? t???o s???i Nan?? Platin', N'??HQG', 300.0, '2008-05-15', '2010-05-15', N'NCPT', '005'),
('004', N'T???o v???t li???u sinh h???c t??? m??ng ???i ng?????i', N'Nh?? n?????c', 100.0, '2007-01-01', '2009-12-31', N'NCPT', '004'),
('005', N'???ng d???ng h??a h???c xanh', N'Tr?????ng', 200.0, '2003-10-10', '2004-12-10', N'??DCN', '007'),
('006', N'Nghi??n c???u t??? b??o g???c', N'Nh?? n?????c', 4000.0, '2006-10-20', '2009-10-20', N'NCPT', '004'),
('007', N'HTTT qu???n l?? th?? vi???n c???a c??c tr?????ng ??H', N'Tr?????ng', 20.0, '2009-05-10', '2010-05-10', N'QLGD', '001')

insert into GV_DT(MAGV, DIENTHOAI) values
('001', '0838912112'),
('001', '0903123123'),
('002', '0913454545'),
('003', '0838121212'),
('003', '0903656565'),
('003', '0938125125'),
('006', '0937888888'),
('008', '0653717171'),
('008', '0913232323')






update GIAOVIEN set GVQLCM = '002' where MAGV = '003'
update GIAOVIEN set GVQLCM = '004' where MAGV = '006'
update GIAOVIEN set GVQLCM = '007' where MAGV = '008'
update GIAOVIEN set GVQLCM = '001' where MAGV = '009'
update GIAOVIEN set GVQLCM = '007' where MAGV = '010'

update GIAOVIEN set MABM = 'MMT' where MAGV = '001'
update GIAOVIEN set MABM = 'HTTT' where MAGV = '002'
update GIAOVIEN set MABM = 'HTTT' where MAGV = '003'
update GIAOVIEN set MABM = 'VS' where MAGV = '004'
update GIAOVIEN set MABM = 'VL??T' where MAGV = '005'
update GIAOVIEN set MABM = 'VS' where MAGV = '006'
update GIAOVIEN set MABM = 'HPT' where MAGV = '007'
update GIAOVIEN set MABM = 'HPT' where MAGV = '008'
update GIAOVIEN set MABM = 'MMT' where MAGV = '009'
update GIAOVIEN set MABM = 'HPT' where MAGV = '010'


update BOMON set TRUONGBM = '007' where MABM = 'HPT'
update BOMON set TRUONGBM = '002' where MABM = 'HTTT'
update BOMON set TRUONGBM = '001' where MABM = 'MMT'
update BOMON set TRUONGBM = '005' where MABM = 'VL??D'
update BOMON set TRUONGBM = '004' where MABM = 'VS'

update BOMON set MAKHOA = 'CNTT' where MABM = 'CNTT'
update BOMON set MAKHOA = 'HH' where MABM = 'HHC'
update BOMON set MAKHOA = 'HH' where MABM = 'HL'
update BOMON set MAKHOA = 'HH' where MABM = 'HPT'
update BOMON set MAKHOA = 'CNTT' where MABM = 'HTTT'
update BOMON set MAKHOA = 'CNTT' where MABM = 'MMT'
update BOMON set MAKHOA = 'SH' where MABM = 'SH'
update BOMON set MAKHOA = 'VL' where MABM = 'VL??T'
update BOMON set MAKHOA = 'VL' where MABM = 'VL??D'
update BOMON set MAKHOA = 'SH' where MABM = 'VS'

update KHOA set TRUONGKHOA = '002' where MAKHOA = 'CNTT'
update KHOA set TRUONGKHOA = '007' where MAKHOA = 'HH'
update KHOA set TRUONGKHOA = '004' where MAKHOA = 'SH'
update KHOA set TRUONGKHOA = '005' where MAKHOA = 'VL'