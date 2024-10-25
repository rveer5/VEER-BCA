from prettytable import PrettyTable
table=PrettyTable()
table.add_column("Friends",["veer","himanshu","rahul","dingu"])
table.add_column("type",["phone","chutiya","bel buddi","khada"])
table._set_double_border_style()
print(table)