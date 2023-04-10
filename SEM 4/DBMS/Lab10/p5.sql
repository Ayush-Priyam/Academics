declare 
    n number; 
begin 
    n :=&n; 
    IF(MOD(n, 100)=0) THEN
        dbms_output.put_line('Multiple of 100'); 
    else 
        dbms_output.put_line('Not a multiple op 100'); 
    end if;
end;
/