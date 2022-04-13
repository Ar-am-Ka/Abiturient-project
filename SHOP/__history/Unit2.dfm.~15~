object DM: TDM
  OldCreateOrder = False
  Height = 355
  Width = 431
  object Tcl: TTable
    Active = True
    DatabaseName = 'DB1'
    OnFilterRecord = TclFilterRecord
    TableName = 'client'
    Left = 144
    Top = 112
    object Tclid_client: TIntegerField
      DisplayLabel = #1050#1083#1080#1077#1085#1090'ID'
      FieldName = 'id_client'
      Required = True
    end
    object TclFIO: TStringField
      DisplayLabel = #1060#1048#1054
      FieldName = 'FIO'
    end
    object Tclphone: TStringField
      DisplayLabel = #1058#1077#1083'. '#1085#1086#1084#1077#1088
      DisplayWidth = 16
      FieldName = 'phone'
      Size = 15
    end
  end
  object Database1: TDatabase
    AliasName = 'Shop'
    Connected = True
    DatabaseName = 'DB1'
    SessionName = 'Default'
    Left = 64
    Top = 72
  end
  object Tit: TTable
    Active = True
    DatabaseName = 'DB1'
    OnFilterRecord = TitFilterRecord
    TableName = 'item'
    Left = 184
    Top = 112
    object Titid_item: TIntegerField
      DisplayLabel = ' '#8470
      DisplayWidth = 4
      FieldName = 'id_item'
      Required = True
    end
    object Titid_cat: TIntegerField
      DisplayLabel = #1050#1086#1076' '#1082#1072#1090#1077#1075#1086#1088#1080#1080
      DisplayWidth = 12
      FieldName = 'id_cat'
    end
    object Titname: TStringField
      DisplayLabel = #1053#1072#1079#1074#1072#1085#1080#1077
      DisplayWidth = 35
      FieldName = 'name'
    end
    object Titcat: TStringField
      DisplayLabel = #1050#1072#1090#1077#1075#1086#1088#1080#1103
      DisplayWidth = 22
      FieldKind = fkLookup
      FieldName = 'cat'
      LookupDataSet = Tca
      LookupKeyFields = 'id_cat'
      LookupResultField = 'name_cat'
      KeyFields = 'id_cat'
      Lookup = True
    end
    object Titprice: TIntegerField
      DisplayLabel = #1057#1090#1086#1080#1084#1086#1089#1090#1100
      DisplayWidth = 5
      FieldName = 'price'
    end
    object Titavailable: TIntegerField
      DisplayLabel = #1053#1072#1083#1080#1095#1080#1077
      DisplayWidth = 4
      FieldName = 'available'
    end
  end
  object Tca: TTable
    Active = True
    DatabaseName = 'DB1'
    TableName = 'category'
    Left = 224
    Top = 112
    object Tcaid_cat: TIntegerField
      DisplayLabel = #1050#1086#1076' '#1082#1072#1090#1077#1075#1086#1088#1080#1080
      DisplayWidth = 4
      FieldName = 'id_cat'
      Required = True
    end
    object Tcaname_cat: TStringField
      DisplayLabel = #1050#1072#1090#1077#1075#1086#1088#1080#1103
      DisplayWidth = 22
      FieldName = 'name_cat'
    end
  end
  object Tsa: TTable
    Active = True
    DatabaseName = 'DB1'
    OnFilterRecord = TsaFilterRecord
    TableName = 'sale'
    Left = 264
    Top = 112
    object Tsaid_sale: TIntegerField
      DisplayLabel = #8470' '#1089#1076#1077#1083#1082#1080
      FieldName = 'id_sale'
      Required = True
    end
    object Tsaid_client: TIntegerField
      DisplayLabel = #1050#1083#1080#1077#1085#1090'ID'
      FieldName = 'id_client'
    end
    object Tsaid_item: TIntegerField
      DisplayLabel = #1050#1086#1076' '#1087#1086#1079#1080#1094#1080#1080
      FieldName = 'id_item'
    end
    object Tsakol_vo: TIntegerField
      DisplayLabel = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086
      FieldName = 'kol_vo'
    end
    object Tsadate_sale: TDateField
      DisplayLabel = #1044#1072#1090#1072' '#1089#1076#1077#1083#1082#1080
      FieldName = 'date_sale'
    end
    object TsaFIO: TStringField
      DisplayLabel = #1060#1048#1054
      FieldKind = fkLookup
      FieldName = 'FIO'
      LookupDataSet = Tcl
      LookupKeyFields = 'id_client'
      LookupResultField = 'FIO'
      KeyFields = 'id_client'
      Lookup = True
    end
    object Tsaname_item: TStringField
      DisplayLabel = #1055#1086#1079#1080#1094#1080#1103' ('#1090#1086#1074#1072#1088')'
      FieldKind = fkLookup
      FieldName = 'name_item'
      LookupDataSet = Tit
      LookupKeyFields = 'id_item'
      LookupResultField = 'name'
      KeyFields = 'id_item'
      Lookup = True
    end
  end
  object DScl: TDataSource
    DataSet = Tcl
    Left = 144
    Top = 168
  end
  object DSit: TDataSource
    DataSet = Tit
    Left = 184
    Top = 168
  end
  object DSca: TDataSource
    DataSet = Tca
    Left = 224
    Top = 168
  end
  object DSsa: TDataSource
    DataSet = Tsa
    Left = 264
    Top = 168
  end
end
