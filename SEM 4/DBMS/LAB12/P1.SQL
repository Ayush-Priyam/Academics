CREATE OR REPLACE TRIGGER suntri BEFORE INSERT ON employeeinfo FOR EACH ROW 
DECLARE d number;
BEGIN 
    select TO_CHAR(sysdate, 'D') into d from dual; 
    IF(d='1')THEN 
        RAISE_APPLICATION_ERROR(-20025,'Day is sunday, cant insert.'); 
    ELSE 
        DBMS_OUTPUT.PUT_LINE(d); 
    END IF;
END; 
/
insert into employeeinfo values (6,'Zakir', 'Khan','IT', 'P4', 'INDORE(IDR)', '3-Jan-1980','M');
select * from employeeinfo;