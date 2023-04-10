CREATE OR REPLACE VIEW EMP_DEP_VIEW AS SELECT e.empid, e.name,d.bd,d.rel 
FROM emp12 e LEFT OUTER JOIN dep12 d ON e.name = d.name;
select * from EMP_DEP_VIEW;
create or replace trigger deltri12 instead of delete on EMP_DEP_VIEW for each row BEGIN delete from emp12 where empid = :old.empid;
END;
/
delete from EMP_DEP_VIEW where empid = 443;