create table tracking12(stid number(3),uname varchar2(20),sdate date);
create table student12(stid number(3), name varchar(20));
CREATE OR REPLACE TRIGGER stutri12 AFTER INSERT ON student12 FOR EACH ROW DECLARE d date;
BEGIN 
    select sysdate into d from dual; 
    INSERT INTO tracking12 values(:new.stid,:new.name,d);
END;
/
insert into student12 values (100,'Samay Raina');
insert into student12 values (103,'Akash Gupta');