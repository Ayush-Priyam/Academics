declare 
    fn varchar2(20); 
    ln varchar2(20);
begin
    fn :='&fn'; 
    ln :='&ln';
dbms_output.put_line('Name: '||ln||', '||fn);
end;
/