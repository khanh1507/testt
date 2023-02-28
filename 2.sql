create database QLGV
go
use QLGV
go
create table GIAOVIEN (

	MAGV varchar(5), 
	HOTEN nvarchar(40), 
	LUONG float, 
	PHAI varchar(3), 
	NGSINH datetime, 
	DIACHI nvarchar(100), 
	GVQLCM varchar(5), 
	MABM varchar(5),
	Constraint PK_GIAOVIEN primary key(MAGV),

	)

create table GV_DT (
	MAGV varchar(5), 
	DIENTHOAI varchar(12),
	Constraint PK_GV_DT primary key(MAGV,DIENTHOAI),
	
	)

create table BOMON (
	MABM varchar(5),
	TENBM varchar(40),
	PHONG varchar(5),
	DIENTHOAI char(12),
	TRUONGBM varchar(5),
	MAKHOA varchar(4),
	NGAYNHANCHUC datetime,
	Constraint PK_BOMON primary key(MABM),
)

create table KHOA (
	MAKHOA varchar(4), 
	TENKHOA nvarchar(40), 
	NAMTL int, 
	PHONG varchar(5), 
	DIENTHOAI varchar(12), 	
	TRUONGKHOA varchar(5), 
	NGAYNHANCHUC varchar(20),
	Constraint PK_KHOA primary key(MAKHOA),
	)

create table DETAI (
	MADT varchar(3),
	TENDT nvarchar(100),
	CAPQL nvarchar(40),
	KINHPHI float,
	NGAYBD datetime,
	NGAYKT datetime,
	MACD nvarchar(4),
	GVCNDT varchar(5),
	Constraint PK_DETAI primary key(MADT),
)

create table CHUDE (
	MACD nvarchar(4), 
	TENCD nvarchar(50),
	Constraint PK_CHUDE primary key(MACD),
	)

create table CONGVIEC (
	MADT varchar(3), 
	SOTT int, 
	TENCV nvarchar(40), 
	NGAYBD datetime, 
	NGAYKT datetime,
	Constraint PK_CONGVIEC primary key(MADT,SOTT),
	)

create table THAMGIADT (
	MAGV varchar(5), 
	MADT varchar(3), 
	STT int, 
	PHUCAP float, 
	KETQUA nvarchar(40),
	Constraint PK_THAMGIADT primary key(MAGV,MADT,STT),
	)

create table NGUOITHAN (
	MAGV varchar(5), 
	TEN nvarchar(20), 
	NGSINH datetime, 
	PHAI varchar(3),
	Constraint PK_NGUOITHAN primary key(MAGV,TEN),
	)

Alter table BOMON
Add constraint FK_BM_GV
foreign key(TRUONGBM)
references GIAOVIEN(MAGV)

Alter table DETAI
Add constraint FK_DT_GV
foreign key(GVCNDT)
references GIAOVIEN(MAGV)

Alter table KHOA
Add constraint FK_K_GV
foreign key(TRUONGKHOA)
references GIAOVIEN(MAGV)

Alter table NGUOITHAN
Add constraint FK_NT_GV
foreign key(MAGV)
references GIAOVIEN(MAGV)

Alter table THAMGIADT
Add constraint FK_TGDT_GV
foreign key(MAGV)
references GIAOVIEN(MAGV)

Alter table GIAOVIEN
Add constraint FK_GV_GV
foreign key(GVQLCM)
references GIAOVIEN(MAGV)

Alter table GIAOVIEN
Add constraint FK_GV_BM
foreign key(MABM)
references BOMON(MABM)

Alter table THAMGIADT
Add constraint FK_TGDT_CV
foreign key(KETQUA)
references CONGVIEC(SOTT)

Alter table CONGVIEC
Add constraint FK_CV_DT
foreign key(MADT)
references DETAI(MADT)

Alter table DETAI
Add constraint FK_DT_CD
foreign key(MACD)
references CHUDE(MACD)

Alter table BOMON
Add constraint FK_BM_K
foreign key(PHONG)
references KHOA(PHONG)

insert into GIAOVIEN (MAGV, HOTEN, LUONG, PHAI, NGSINH, DIACHI, GVQLCM, MABM) values 
('001', N'Nguyễn Hoài An', '2000', N'Nam', '1973-02-15', N'25/3 Lạc Long Quân, Q.10, TP HCM', NULL, NULL), 
('002', N'Trần Trà Hương', '2500', N'Nữ', '1960-06-20', N'125 Trần Hưng Đạo, Q.1,TP HCM', NULL, NULL), 
('003', N'Nguyễn Ngọc Ánh', '2200', N'Nữ', '1975-05-11', N'12/21 Võ Văn Ngân Thủ Đức, TP HCM', NULL, NULL), 
('004', N'Trương Nam Sơn', '2300', N'Nam', '1959-06-20', N'215 Lý Thường Kiệt,TP Biên Hòa', NULL, NULL), 
('005', N'Lý Hoàng Hà', '2500', N'Nam', '1954-10-23', N'22/5 Nguyễn Xí, Q.Bình Thạnh, TP HCM', NULL, NULL), 
('006', N'Trần Bạch Tuyết', '1500', N'Nữ', '1980-05-20', N'127 Hùng Vương, TP Mỹ Tho', NULL, NULL), 
('007', N'Nguyễn An Trung', '2100', N'Nam', '1976-06-05', N'234 3/2, TP Biên Hòa', NULL, NULL), 
('008', N'Trần Trung Hiếu', '1800', N'Nam', '1977-08-06', N'22/11 Lý Thường Kiệt, TP Mỹ Tho', NULL, NULL), 
('009', N'Trần Hoàng Nam', '2000', N'Nam', '1975-11-22', N'234 Trấn Não, An Phú,TP HCM', NULL, NULL), 
('010', N'Phạm Nam Thanh', '1500', N'Nam', '1980-12-12', N'221 Hùng Vương, Q.5, TP HCM', NULL, NULL)

insert into KHOA (MAKHOA, TENKHOA, NAMTL, PHONG, DIENTHOAI, TRUONGKHOA, NGAYNHANCHUC) values
('CNTT', N'Công nghệ thông tin', 1995, 'B11', '0838123456', NULL, '2005-02-20'),
('HH', N'Hóa học', 1980, 'B41', '0838456456', NULL, '2001-10-15'),
('SH', N'Sinh học', 1980, 'B31', '0838454545', NULL, '2005-10-11'),	
('VL', N'Vật lý', 1976, 'B21', '0838223223', NULL, '2005-09-18')

insert into BOMON (MABM, TENBM, PHONG, DIENTHOAI, TRUONGBM, MAKHOA, NGAYNHANCHUC) values
('CNTT', N'Công nghệ tri thức', 'B15', '0838126126', NULL, NULL, NULL), 
('HHC', N'Hóa hữu cơ', 'B44', '838222222', NULL, NULL, NULL), 
('HL', N'Hóa lý', 'B42', '0838878787', NULL, NULL, NULL),
('HPT', N'Hóa phân tích', 'B43', '0838777777', NULL, NULL, '2007-10-15'), 
('HTTT', N'Hệ thống thông tin', 'B13', '0838125125', NULL, NULL, '2004-09-20'), 
('MMT', N'Mạng máy tính', 'B16', '0838676767', NULL, NULL, '2005-05-15'), 
('SH', N'Sinh hóa', 'B33', '0838898989', NULL, NULL, NULL), 
('VLĐT', N'Vật lý điện tử', 'B23', '0838234234', NULL, NULL, NULL), 
('VLƯD', N'Vật lý ứng dụng', 'B24', '0838454545', NULL, NULL, '2006-02-18'), 
('VS', N'Vi sinh', 'B32', '0838909090', NULL, NULL, '2007-01-01')

insert into CONGVIEC(MADT, SOTT, TENCV, NGAYBD, NGAYKT) values 
('001', 1,N'Khởi tạo và Lập kế hoạch', ' 2007-10-20', '2008-12-21'), 
('001',2, N'Xác định yêu cầu', '2008-12-21', '2008-03-22'), 
('001',3, N'Phân tích hệ thống', '2008-03-22', '2008-05-22'),
('001', 4,N'Thiết kế hệ thống', '2008-05-23', '2008-06-23'),
('001', 5,N'Cài đặt thử nghiệm', '2008-06-24', '2008-10-20'), 
('002', 1,N'Khởi tạo và Lập kế hoạch', '2009-05-10', '2009-07-10'), 
('002', 2,N'Xác định yêu cầu', '2009-07-11', '2009-10-11'), 
('002', 3,N'Phân tích hệ thống', '2009-10-12', '2009-12-20'), 
('002', 4,N'Thiết kế hệ thống', '2009-12-21', '20010-03-22'), 
('001', 5,N'Cài đặt thử nghiệm', '2010-03-23', '2010-05-10'), 
('006', 1,N'Lấy mẫu', '2006-10-20', '2007-02-20'), 
('006', 2,N'Nuôi cấy', '2007-02-21', '2008-08-21')

insert into THAMGIADT(MAGV, MADT, STT, PHUCAP, KETQUA) values
('001', '002', 1, 0.0, NULL),
('001', '002', 2, 2.0, NULL),
('002', '001', 4, 2.0, N'Đạt'),
('003', '001', 1, 1.0, N'Đạt'),
('003', '001', 2, 0.0, N'Đạt'),
('003', '001', 4, 1.0, N'Đạt'),
('003', '002', 2, 0.0, NULL),
('004', '006', 1, 0.0, N'Đạt'),
('004', '006', 2, 1.0, N'Đạt'),
('006', '006', 2, 1.5, N'Đạt'),
('009', '002', 3, 0.5, NULL)

insert into NGUOITHAN(MAGV, TEN, NGSINH, PHAI) values
('001', N'Hùng', '1990-01-14', N'Nam'),
('001', N'Thủy', '1994-12-08', N'Nữ'),
('003', N'Hà', '1998-09-03', N'Nữ'),
('003', N'Thu', '1998-09-03', N'Nữ'),
('007', N'Mai', '2003-03-26', N'Nữ'),
('007', N'Vy', '2000-02-14', N'Nữ'),
('008', N'Nam', '1991-05-06', N'Nam'),
('009', N'An', '1996-08-19', N'Nam'),
('010', N'Nguyệt', '2006-01-14', N'Nữ')

insert into CHUDE(MACD, TENCD) values
(N'NCPT', N'Nghiên cứu phát triển'),
(N'QLGD', N'Quản lí giáo dục'),
(N'ƯDCN', N'Ứng dụng công nghệ')

insert into DETAI(MADT, CAPQL, KINHPHI, NGAYBD, NGAYKT, MACD, GVCNDT) values
('001', N'HTTT quản lý các trường ĐH', N'ĐHQG', 20.0, '2007-10-20', '2008-10-20', N'QLGD', '002'),
('002', N'HTTT quản lý giáo vụ cho một khoa', N'Trường', 20.0, '2000-10-12', '2001-10-12', N'QLGD', '002'),
('003', N'Nghiên cứu chế tạo sợi Nanô Platin', N'ĐHQG', 300.0, '2008-05-15', '2010-05-15', N'NCPT', '005'),
('004', N'Tạo vật liệu sinh học từ màng ối người', N'Nhà nước', 100.0, '2007-01-01', '2009-12-31', N'NCPT', '004'),
('005', N'Ứng dụng hóa học xanh', N'Trường', 200.0, '2003-10-10', '2004-12-10', N'ƯDCN', '007'),
('006', N'Nghiên cứu tế bào gốc', N'Nhà nước', 4000.0, '2006-10-20', '2009-10-20', N'NCPT', '004'),
('007', N'HTTT quản lý thư viện của các trường ĐH', N'Trường', 20.0, '2009-05-10', '2010-05-10', N'QLGD', '001')

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
update GIAOVIEN set MABM = 'VLĐT' where MAGV = '005'
update GIAOVIEN set MABM = 'VS' where MAGV = '006'
update GIAOVIEN set MABM = 'HPT' where MAGV = '007'
update GIAOVIEN set MABM = 'HPT' where MAGV = '008'
update GIAOVIEN set MABM = 'MMT' where MAGV = '009'
update GIAOVIEN set MABM = 'HPT' where MAGV = '010'


update BOMON set TRUONGBM = '007' where MABM = 'HPT'
update BOMON set TRUONGBM = '002' where MABM = 'HTTT'
update BOMON set TRUONGBM = '001' where MABM = 'MMT'
update BOMON set TRUONGBM = '005' where MABM = 'VLƯD'
update BOMON set TRUONGBM = '004' where MABM = 'VS'

update BOMON set MAKHOA = 'CNTT' where MABM = 'CNTT'
update BOMON set MAKHOA = 'HH' where MABM = 'HHC'
update BOMON set MAKHOA = 'HH' where MABM = 'HL'
update BOMON set MAKHOA = 'HH' where MABM = 'HPT'
update BOMON set MAKHOA = 'CNTT' where MABM = 'HTTT'
update BOMON set MAKHOA = 'CNTT' where MABM = 'MMT'
update BOMON set MAKHOA = 'SH' where MABM = 'SH'
update BOMON set MAKHOA = 'VL' where MABM = 'VLĐT'
update BOMON set MAKHOA = 'VL' where MABM = 'VLƯD'
update BOMON set MAKHOA = 'SH' where MABM = 'VS'

update KHOA set TRUONGKHOA = '002' where MAKHOA = 'CNTT'
update KHOA set TRUONGKHOA = '007' where MAKHOA = 'HH'
update KHOA set TRUONGKHOA = '004' where MAKHOA = 'SH'
update KHOA set TRUONGKHOA = '005' where MAKHOA = 'VL'