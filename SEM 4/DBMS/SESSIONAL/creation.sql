create table cust(cid varchar2(3) constraint cpk1 primary key, cname varchar2(20), ccity varchar2(20));
insert into cust values('C1','Praadip','Mysore');
insert into cust values('C2','Aastik','Kolkota');
insert into cust values('C3','Tushar','Pune');
insert into cust values('C4','Arpan','Chennai');
insert into cust values('C5','Anumita','Indore');


create table state_name(ccity varchar2(20), state varchar2(20));
insert into state_name values('Mysore', 'Karnataka');
insert into state_name values('Kolkata', 'West Bengal');
insert into state_name values('Pune', 'Maharashtra');
insert into state_name values('Chennai', 'Tamil Nadu');
insert into state_name values('Indore', 'Madhya Pradesh');


create table prod(pid varchar2(2), pname varchar2(10), pcost number(3), cid varchar2(2), pprofit number(2));
insert into prod values('I3', 'Pen', 20.5, 'C2', 20);
insert into prod values('I2', 'Floppy', 30, 'C4', 12);
insert into prod values('I1', 'Pencil', 5.25, 'C1',NULL);
alter table prod add constraint cfk foreign key(cid) references cust(cid);