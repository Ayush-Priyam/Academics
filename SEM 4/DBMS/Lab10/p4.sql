declare 
    age number(4); 
begin 
    age :=&age; 
    IF(age>=18) THEN
        dbms_output.put_line('Eligible'); 
    else 
        dbms_output.put_line('Ineligible'); 
    end if;
end;
/