DECLARE
    n varchar2(20); 
BEGIN 
    n := '&n';
    dbms_output.put_line('Uppercase: '||UPPER(n)); 
    dbms_output.put_line('Lowercase: '||lower(n)); 
END;
/