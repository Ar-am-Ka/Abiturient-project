﻿object Finputedit: TFinputedit
  Left = 0
  Top = 0
  Anchors = [akLeft, akTop, akRight, akBottom]
  BorderStyle = bsSingle
  Caption = #1040#1073#1080#1090#1091#1088#1080#1077#1085#1090' '#1042#1091#1079#1072' : '#1088#1072#1073#1086#1090#1072' '#1089' '#1041#1044
  ClientHeight = 824
  ClientWidth = 1484
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Segoe UI'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  WindowState = wsMaximized
  OnActivate = FormActivate
  OnShow = FormShow
  DesignSize = (
    1484
    824)
  PixelsPerInch = 96
  TextHeight = 17
  object PG1: TPageControl
    Left = 0
    Top = 2
    Width = 1472
    Height = 751
    ActivePage = TabSheet1
    Anchors = [akLeft, akTop, akRight]
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    MultiLine = True
    ParentFont = False
    TabOrder = 0
    OnChange = PG1Change
    object TabSheet1: TTabSheet
      Caption = ' '#1040#1073#1080#1090#1091#1088#1080#1077#1085#1090' '
      OnEnter = TabSheet1Enter
      OnExit = TabSheet1Exit
      DesignSize = (
        1464
        719)
      object RG1mode: TRadioGroup
        Left = 3
        Top = 16
        Width = 254
        Height = 49
        Caption = #1056#1077#1078#1080#1084' '#1088#1072#1073#1086#1090#1099' c '#1076#1072#1085#1085#1099#1084#1080
        Columns = 2
        ItemIndex = 0
        Items.Strings = (
          #1042#1074#1086#1076
          #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077)
        TabOrder = 1
        OnClick = RG1modeClick
      end
      object DBG1enr: TDBGrid
        Left = 263
        Top = 16
        Width = 1191
        Height = 297
        Anchors = [akLeft, akTop, akRight]
        DataSource = DM.DSenr
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        ReadOnly = True
        TabOrder = 0
        TitleFont.Charset = RUSSIAN_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -13
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
        OnCellClick = DBG1enrCellClick
        OnKeyPress = DBG1enrKeyPress
        Columns = <
          item
            Expanded = False
            FieldName = 'id_enr'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'last_name'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'first_name'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'patronymic_name'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'sex'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'date_birth'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'citizen'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'address'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'phone'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'edu'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'doc_edu'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'honors'
            Visible = True
          end>
      end
      object GroupBox1: TGroupBox
        Left = 3
        Top = 71
        Width = 254
        Height = 645
        Caption = #1056#1072#1073#1086#1090#1072' '#1089' '#1076#1072#1085#1085#1099#1084#1080
        TabOrder = 2
        object Label1: TLabel
          Left = 3
          Top = 41
          Width = 90
          Height = 17
          Caption = 'ID '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1072
        end
        object Label2: TLabel
          Left = 3
          Top = 118
          Width = 26
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1048#1084#1103
          ParentBiDiMode = False
        end
        object Label3: TLabel
          Left = 3
          Top = 64
          Width = 53
          Height = 17
          Caption = #1060#1072#1084#1080#1083#1080#1103
        end
        object Label4: TLabel
          Left = 3
          Top = 172
          Width = 55
          Height = 17
          Caption = #1054#1090#1095#1077#1089#1090#1074#1086
        end
        object Label5: TLabel
          Left = 3
          Top = 272
          Width = 92
          Height = 17
          Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
        end
        object Label6: TLabel
          Left = 3
          Top = 328
          Width = 77
          Height = 17
          Caption = #1043#1088#1072#1078#1076#1072#1085#1089#1090#1074#1086
        end
        object Label7: TLabel
          Left = 3
          Top = 382
          Width = 36
          Height = 17
          Caption = #1040#1076#1088#1077#1089
        end
        object Label8: TLabel
          Left = 3
          Top = 436
          Width = 102
          Height = 17
          Caption = #1053#1086#1084#1077#1088' '#1090#1077#1083#1077#1092#1086#1085#1072
        end
        object Label10: TLabel
          Left = 3
          Top = 544
          Width = 57
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1044#1086#1082#1091#1084#1077#1085#1090
          ParentBiDiMode = False
        end
        object Label9: TLabel
          Left = 3
          Top = 490
          Width = 82
          Height = 17
          Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077
        end
        object Eidenr: TEdit
          Left = 120
          Top = 38
          Width = 131
          Height = 25
          Hint = #1058#1086#1083#1100#1082#1086' '#1095#1090#1077#1085#1080#1077
          ParentShowHint = False
          ReadOnly = True
          ShowHint = True
          TabOrder = 0
          OnEnter = EidenrEnter
        end
        object Ename: TEdit
          Left = 3
          Top = 141
          Width = 248
          Height = 25
          TabOrder = 2
        end
        object Elastn: TEdit
          Left = 3
          Top = 87
          Width = 248
          Height = 25
          TabOrder = 1
        end
        object Epatr: TEdit
          Left = 3
          Top = 192
          Width = 248
          Height = 25
          TabOrder = 3
        end
        object Eaddres: TEdit
          Left = 3
          Top = 405
          Width = 248
          Height = 25
          TabOrder = 7
        end
        object DTPbirthdate: TDateTimePicker
          Left = 3
          Top = 297
          Width = 247
          Height = 25
          Date = 43782.910739699070000000
          Time = 43782.910739699070000000
          TabOrder = 5
        end
        object RG2sex: TRadioGroup
          Left = 4
          Top = 223
          Width = 247
          Height = 49
          Caption = #1055#1086#1083
          Columns = 2
          ItemIndex = 0
          Items.Strings = (
            #1052#1091#1078#1095#1080#1085#1072
            #1046#1077#1085#1097#1080#1085#1072)
          TabOrder = 4
        end
        object Ephone: TMaskEdit
          Left = 3
          Top = 459
          Width = 248
          Height = 25
          EditMask = '+7!\(999\)000-0000;1;_'
          MaxLength = 15
          TabOrder = 8
          Text = '+7(   )   -    '
        end
        object CBdoc_edu: TComboBox
          Left = 3
          Top = 567
          Width = 134
          Height = 25
          TabOrder = 10
          Items.Strings = (
            #1072#1090#1090#1077#1089#1090#1072#1090
            #1076#1080#1087#1083#1086#1084)
        end
        object CBedu: TComboBox
          Left = 3
          Top = 513
          Width = 248
          Height = 25
          ItemIndex = 1
          TabOrder = 9
          Text = #1089#1088#1077#1076#1085#1077#1077' '#1087#1088#1086#1092#1077#1089#1089#1080#1086#1085#1072#1083#1100#1085#1086#1077
          Items.Strings = (
            #1089#1088#1077#1076#1085#1077#1077' '#1086#1073#1097#1077#1077
            #1089#1088#1077#1076#1085#1077#1077' '#1087#1088#1086#1092#1077#1089#1089#1080#1086#1085#1072#1083#1100#1085#1086#1077
            #1085#1072#1095#1072#1083#1100#1085#1086#1077' '#1087#1088#1086#1092#1077#1089#1089#1080#1086#1085#1072#1083#1100#1085#1086#1077)
        end
        object CBhonors: TCheckBox
          Left = 154
          Top = 575
          Width = 97
          Height = 17
          Caption = #1057' '#1086#1090#1083#1080#1095#1080#1077#1084
          TabOrder = 11
        end
        object BitBtn1: TBitBtn
          Left = 1
          Top = 608
          Width = 122
          Height = 34
          Caption = #1047#1072#1087#1080#1089#1072#1090#1100
          Kind = bkYes
          NumGlyphs = 2
          TabOrder = 12
          OnClick = BitBtn1Click
        end
        object BitBtn2: TBitBtn
          Left = 129
          Top = 608
          Width = 122
          Height = 34
          Caption = #1059#1076#1072#1083#1080#1090#1100
          Kind = bkAbort
          NumGlyphs = 2
          TabOrder = 13
          OnClick = BitBtn2Click
        end
        object Ecitizen: TComboBox
          Left = 3
          Top = 351
          Width = 248
          Height = 25
          TabOrder = 6
          Items.Strings = (
            #1040#1073#1093#1072#1079#1080#1103
            #1040#1074#1089#1090#1088#1072#1083#1080#1103
            #1040#1074#1089#1090#1088#1080#1103
            #1040#1079#1077#1088#1073#1072#1081#1076#1078#1072#1085
            #1040#1083#1073#1072#1085#1080#1103
            #1040#1083#1078#1080#1088
            #1040#1085#1075#1086#1083#1072
            #1040#1085#1076#1086#1088#1088#1072
            #1040#1085#1090#1080#1075#1091#1072' '#1080' '#1041#1072#1088#1073#1091#1076#1072
            #1040#1088#1075#1077#1085#1090#1080#1085#1072
            #1040#1088#1084#1077#1085#1080#1103
            #1040#1092#1075#1072#1085#1080#1089#1090#1072#1085
            #1041#1072#1075#1072#1084#1089#1082#1080#1077' '#1054#1089#1090#1088#1086#1074#1072
            #1041#1072#1085#1075#1083#1072#1076#1077#1096
            #1041#1072#1088#1073#1072#1076#1086#1089
            #1041#1072#1093#1088#1077#1081#1085
            #1041#1077#1083#1080#1079
            #1041#1077#1083#1086#1088#1091#1089#1089#1080#1103
            #1041#1077#1083#1100#1075#1080#1103
            #1041#1077#1085#1080#1085
            #1041#1086#1083#1075#1072#1088#1080#1103
            #1041#1086#1083#1080#1074#1080#1103
            #1041#1086#1089#1085#1080#1103' '#1080' '#1043#1077#1088#1094#1077#1075#1086#1074#1080#1085#1072
            #1041#1086#1090#1089#1074#1072#1085#1072
            #1041#1088#1072#1079#1080#1083#1080#1103
            #1041#1088#1091#1085#1077#1081
            #1041#1091#1088#1082#1080#1085#1072'-'#1060#1072#1089#1086
            #1041#1091#1088#1091#1085#1076#1080
            #1041#1091#1090#1072#1085
            #1042#1072#1085#1091#1072#1090#1091#9#1055#1086#1088#1090'-'#1042#1080#1083#1072
            #1042#1072#1090#1080#1082#1072#1085
            #1042#1077#1083#1080#1082#1086#1073#1088#1080#1090#1072#1085#1080#1103
            #1042#1077#1085#1075#1088#1080#1103
            #1042#1077#1085#1077#1089#1091#1101#1083#1072
            #1042#1086#1089#1090#1086#1095#1085#1099#1081
            #1042#1100#1077#1090#1085#1072#1084
            #1043#1072#1073#1086#1085
            #1043#1072#1080#1090#1080
            #1043#1072#1081#1072#1085#1072
            #1043#1072#1084#1073#1080#1103
            #1043#1072#1085#1072
            #1043#1074#1072#1090#1077#1084#1072#1083#1072
            #1043#1074#1080#1085#1077#1103
            #1043#1074#1080#1085#1077#1103'-'#1041#1080#1089#1072#1091
            #1043#1077#1088#1084#1072#1085#1080#1103' ('#1060#1056#1043')'
            #1043#1086#1085#1076#1091#1088#1072#1089
            #1055#1072#1083#1077#1089#1090#1080#1085#1072
            #1043#1088#1077#1085#1072#1076#1072
            #1043#1088#1077#1094#1080#1103
            #1043#1088#1091#1079#1080#1103
            #1044#1072#1085#1080#1103
            #1044#1078#1080#1073#1091#1090#1080
            #1044#1086#1084#1080#1085#1080#1082#1072
            #1044#1086#1084#1080#1085#1080#1082#1072#1085#1089#1082#1072#1103' '#1056#1077#1089#1087#1091#1073#1083#1080#1082#1072
            #1044#1056' '#1050#1086#1085#1075#1086
            #1045#1075#1080#1087#1077#1090
            #1047#1072#1084#1073#1080#1103
            #1047#1080#1084#1073#1072#1073#1074#1077
            #1048#1079#1088#1072#1080#1083#1100
            #1048#1085#1076#1080#1103
            #1048#1085#1076#1086#1085#1077#1079#1080#1103
            #1048#1086#1088#1076#1072#1085#1080#1103
            #1048#1088#1072#1082
            #1048#1088#1072#1085
            #1048#1088#1083#1072#1085#1076#1080#1103
            #1048#1089#1083#1072#1085#1076#1080#1103
            #1048#1089#1087#1072#1085#1080#1103
            #1048#1090#1072#1083#1080#1103
            #1049#1077#1084#1077#1085
            #1050#1072#1073#1086'-'#1042#1077#1088#1076#1077
            #1050#1072#1079#1072#1093#1089#1090#1072#1085
            #1050#1072#1084#1073#1086#1076#1078#1072
            #1050#1072#1084#1077#1088#1091#1085
            #1050#1072#1085#1072#1076#1072
            #1050#1072#1090#1072#1088
            #1050#1077#1085#1080#1103
            #1050#1080#1087#1088
            #1050#1080#1088#1075#1080#1079#1080#1103
            #1050#1080#1088#1080#1073#1072#1090#1080
            #1050#1053#1056' ('#1050#1080#1090#1072#1081')'
            #1050#1053#1044#1056' ('#1057#1077#1074#1077#1088#1085#1072#1103' '#1050#1086#1088#1077#1103')'
            #1050#1086#1083#1091#1084#1073#1080#1103
            #1050#1086#1084#1086#1088#1089#1082#1080#1077' '#1054#1089#1090#1088#1086#1074#1072
            #1050#1086#1089#1090#1072'-'#1056#1080#1082#1072
            #1050#1086#1090'-'#1076#39#1048#1074#1091#1072#1088
            #1050#1091#1073#1072
            #1050#1091#1074#1077#1081#1090
            #1051#1072#1086#1089
            #1051#1072#1090#1074#1080#1103
            #1051#1077#1089#1086#1090#1086
            #1051#1080#1073#1077#1088#1080#1103
            #1051#1080#1074#1072#1085
            #1051#1080#1074#1080#1103
            #1051#1080#1090#1074#1072
            #1051#1080#1093#1090#1077#1085#1096#1090#1077#1081#1085
            #1051#1102#1082#1089#1077#1084#1073#1091#1088#1075
            #1052#1072#1074#1088#1080#1082#1080#1081
            #1052#1072#1074#1088#1080#1090#1072#1085#1080#1103
            #1052#1072#1076#1072#1075#1072#1089#1082#1072#1088
            #1052#1072#1083#1072#1074#1080#9#1051#1080#1083#1086#1085#1075#1074#1077
            #1052#1072#1083#1072#1081#1079#1080#1103
            #1052#1072#1083#1080
            #1052#1072#1083#1100#1076#1080#1074#1089#1082#1080#1077' '#1054#1089#1090#1088#1086#1074#1072
            #1052#1072#1083#1100#1090#1072
            #1052#1072#1088#1086#1082#1082#1086
            #1052#1072#1088#1096#1072#1083#1083#1086#1074#1099' '#1054#1089#1090#1088#1086#1074#1072
            #1052#1077#1082#1089#1080#1082#1072
            #1052#1086#1079#1072#1084#1073#1080#1082
            #1052#1086#1083#1076#1072#1074#1080#1103
            #1052#1086#1085#1072#1082#1086
            #1052#1086#1085#1075#1086#1083#1080#1103
            #1052#1100#1103#1085#1084#1072
            #1053#1072#1084#1080#1073#1080#1103
            #1053#1072#1091#1088#1091
            #1053#1077#1087#1072#1083
            #1053#1080#1075#1077#1088
            #1053#1080#1075#1077#1088#1080#1103
            #1053#1080#1076#1077#1088#1083#1072#1085#1076#1099
            #1053#1080#1082#1072#1088#1072#1075#1091#1072
            #1053#1086#1074#1072#1103' '#1047#1077#1083#1072#1085#1076#1080#1103
            #1053#1086#1088#1074#1077#1075#1080#1103
            #1054#1040#1069' ('#1069#1084#1080#1088#1072#1090#1099')'
            #1054#1084#1072#1085
            #1055#1072#1082#1080#1089#1090#1072#1085
            #1055#1072#1083#1072#1091
            #1055#1072#1085#1072#1084#1072
            #1055#1072#1087#1091#1072' - '#1053#1086#1074#1072#1103' '#1043#1074#1080#1085#1077#1103
            #1055#1072#1088#1072#1075#1074#1072#1081
            #1055#1077#1088#1091
            #1055#1086#1083#1100#1096#1072
            #1055#1086#1088#1090#1091#1075#1072#1083#1080#1103
            #1056#1077#1089#1087#1091#1073#1083#1080#1082#1072' '#1040#1088#1094#1072#1093
            #1056#1077#1089#1087#1091#1073#1083#1080#1082#1072' '#1050#1086#1085#1075#1086
            #1056#1077#1089#1087#1091#1073#1083#1080#1082#1072' '#1050#1086#1088#1077#1103' ('#1070#1078#1085#1072#1103' '#1050#1086#1088#1077#1103')'
            #1056#1060
            #1056#1091#1072#1085#1076#1072
            #1056#1091#1084#1099#1085#1080#1103
            #1057#1072#1083#1100#1074#1072#1076#1086#1088
            #1057#1072#1084#1086#1072
            #1057#1072#1085'-'#1052#1072#1088#1080#1085#1086
            #1057#1072#1085'-'#1058#1086#1084#1077' '#1080' '#1055#1088#1080#1085#1089#1080#1087#1080
            #1057#1072#1091#1076#1086#1074#1089#1082#1072#1103' '#1040#1088#1072#1074#1080#1103
            #1057#1077#1074#1077#1088#1085#1072#1103' '#1052#1072#1082#1077#1076#1086#1085#1080#1103
            #1057#1077#1081#1096#1077#1083#1100#1089#1082#1080#1077' '#1054#1089#1090#1088#1086#1074#1072
            #1057#1077#1085#1077#1075#1072#1083
            #1057#1077#1085#1090'-'#1042#1080#1085#1089#1077#1085#1090' '#1080' '#1043#1088#1077#1085#1072#1076#1080#1085#1099
            #1057#1077#1085#1090'-'#1050#1080#1090#1089' '#1080' '#1053#1077#1074#1080#1089
            #1057#1077#1085#1090'-'#1051#1102#1089#1080#1103
            #1057#1077#1088#1073#1080
            #1057#1080#1085#1075#1072#1087#1091#1088
            #1057#1080#1088#1080#1103
            #1057#1083#1086#1074#1072#1082#1080#1103
            #1057#1083#1086#1074#1077#1085#1080#1103
            #1057#1086#1083#1086#1084#1086#1085#1086#1074#1099' '#1054#1089#1090#1088#1086#1074#1072
            #1057#1086#1084#1072#1083#1080
            #1057#1091#1076#1072#1085
            #1057#1091#1088#1080#1085#1072#1084
            #1057#1064#1040' ('#1064#1090#1072#1090#1099')'
            #1057#1100#1077#1088#1088#1072'-'#1051#1077#1086#1085#1077
            #1058#1072#1076#1078#1080#1082#1080#1089#1090#1072#1085
            #1058#1072#1080#1083#1072#1085#1076
            #1058#1072#1085#1079#1072#1085#1080#1103
            #1058#1086#1075#1086
            #1058#1086#1085#1075#1072
            #1058#1088#1080#1085#1080#1076#1072#1076' '#1080' '#1058#1086#1073#1072#1075#1086
            #1058#1091#1074#1072#1083#1091#9#1060#1091#1085#1072#1092#1091#1090#1080
            #1058#1091#1085#1080#1089
            #1058#1091#1088#1082#1084#1077#1085#1080#1103
            #1058#1091#1088#1094#1080#1103
            #1059#1075#1072#1085#1076#1072
            #1059#1079#1073#1077#1082#1080#1089#1090#1072#1085
            #1059#1082#1088#1072#1080#1085#1072
            #1059#1088#1091#1075#1074#1072#1081
            #1060#1077#1076#1077#1088#1072#1090#1080#1074#1085#1099#1077' '#1064#1090#1072#1090#1099' '#1052#1080#1082#1088#1086#1085#1077#1079#1080#1080
            #1060#1080#1076#1078#1080
            #1060#1080#1083#1080#1087#1087#1080#1085#1099
            #1060#1080#1085#1083#1103#1085#1076#1080#1103
            #1060#1088#1072#1085#1094#1080#1103
            #1061#1086#1088#1074#1072#1090#1080#1103
            #1062#1040#1056' ('#1062#1077#1085#1090#1088#1072#1083#1100#1085#1072#1103' '#1040#1092#1088#1080#1082#1072')'
            #1063#1072#1076
            #1063#1077#1088#1085#1086#1075#1086#1088#1080#1103
            #1063#1077#1093#1080#1103
            #1063#1080#1083#1080
            #1064#1074#1077#1081#1094#1072#1088#1080#1103
            #1064#1074#1077#1094#1080#1103
            #1064#1088#1080'-'#1051#1072#1085#1082#1072
            #1069#1082#1074#1072#1076#1086#1088#9#1050#1080#1090#1086
            #1069#1082#1074#1072#1090#1086#1088#1080#1072#1083#1100#1085#1072#1103
            #1069#1088#1080#1090#1088#1077#1103#9#1040#1089#1084#1101#1088#1072
            #1069#1089#1074#1072#1090#1080#1085#1080
            #1069#1089#1090#1086#1085#1080#1103
            #1069#1092#1080#1086#1087#1080#1103
            #1070#1040#1056' ('#1070#1078#1085#1072#1103' '#1040#1092#1088#1080#1082#1072')'
            #1070#1078#1085#1072#1103' '#1054#1089#1077#1090#1080#1103
            #1070#1078#1085#1099#1081' '#1057#1091#1076#1072#1085
            #1071#1084#1072#1081#1082#1072
            #1071#1087#1086#1085#1080#1103)
        end
      end
      object GroupBox2: TGroupBox
        Left = 371
        Top = 319
        Width = 210
        Height = 397
        Caption = #1055#1086#1080#1089#1082
        TabOrder = 3
        object Label11: TLabel
          Left = 30
          Top = 45
          Width = 74
          Height = 17
          Caption = #1055#1086' '#1092#1072#1084#1080#1083#1080#1080
        end
        object Label13: TLabel
          Left = 30
          Top = 240
          Width = 102
          Height = 17
          Caption = #1053#1086#1084#1077#1088' '#1090#1077#1083#1077#1092#1086#1085#1072
        end
        object Label14: TLabel
          Left = 30
          Top = 109
          Width = 58
          Height = 17
          Caption = #1055#1086' '#1080#1084#1077#1085#1080
        end
        object Label15: TLabel
          Left = 30
          Top = 173
          Width = 72
          Height = 17
          Caption = #1055#1086' '#1086#1090#1095#1077#1089#1090#1074#1091
        end
        object Eslastn: TEdit
          Left = 30
          Top = 68
          Width = 150
          Height = 25
          TabOrder = 0
          OnChange = EslastnChange
        end
        object Esphone: TMaskEdit
          Left = 30
          Top = 263
          Width = 150
          Height = 25
          EditMask = '+7!\(999\)000-0000;1;_'
          MaxLength = 15
          TabOrder = 3
          Text = '+7(   )   -    '
          OnChange = EsphoneChange
        end
        object Esname: TEdit
          Left = 30
          Top = 132
          Width = 150
          Height = 25
          TabOrder = 1
          OnChange = EsnameChange
        end
        object Espatronymicn: TEdit
          Left = 30
          Top = 196
          Width = 150
          Height = 25
          TabOrder = 2
          OnChange = EspatronymicnChange
        end
        object Bsclear: TButton
          Left = 30
          Top = 323
          Width = 150
          Height = 30
          Caption = #1054#1095#1080#1089#1090#1080#1090#1100
          TabOrder = 4
        end
      end
      object DBNavigator1: TDBNavigator
        Left = 263
        Top = 319
        Width = 102
        Height = 32
        DataSource = DM.DSenr
        VisibleButtons = [nbPrior, nbNext]
        Hints.Strings = (
          #1055#1077#1088#1074#1072#1103' '#1079#1072#1087#1080#1089#1100
          #1055#1088#1077#1076#1099#1076#1091#1097#1072#1103' '#1079#1072#1087#1080#1089#1080#1100
          #1057#1083#1077#1076#1091#1102#1097#1072#1103' '#1079#1072#1087#1080#1089#1100
          #1055#1088#1077#1076#1099#1076#1091#1097#1072#1103' '#1079#1072#1087#1080#1089#1100
          'Insert record'
          'Delete record'
          'Edit record'
          'Post edit'
          'Cancel edit'
          #1054#1073#1085#1086#1074#1080#1090#1100' '#1076#1072#1085#1085#1099#1077
          'Apply updates'
          'Cancel updates')
        ParentShowHint = False
        ShowHint = True
        TabOrder = 7
        OnClick = DBNavigator1Click
      end
      object GroupBox4: TGroupBox
        Left = 622
        Top = 319
        Width = 832
        Height = 397
        Anchors = [akLeft, akTop, akRight]
        Caption = #1060#1080#1083#1100#1090#1088#1099
        TabOrder = 4
        object Label12: TLabel
          Left = 215
          Top = 109
          Width = 26
          Height = 17
          Alignment = taRightJustify
          Caption = '...'#1044#1086
          WordWrap = True
        end
        object Efname: TEdit
          Left = 30
          Top = 132
          Width = 153
          Height = 25
          TabOrder = 3
        end
        object RG3fsex: TRadioGroup
          Left = 215
          Top = 196
          Width = 153
          Height = 133
          Caption = #1055#1086' '#1087#1086#1083#1091
          ItemIndex = 0
          Items.Strings = (
            #1042#1089#1077
            #1052#1091#1078#1095#1080#1085#1072
            #1046#1077#1085#1097#1080#1085#1072)
          TabOrder = 9
        end
        object CBfcitizen: TCheckBox
          Left = 398
          Top = 45
          Width = 137
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1055#1086' '#1075#1088#1072#1078#1076#1072#1085#1089#1090#1074#1091
          Color = clBtnFace
          ParentBiDiMode = False
          ParentColor = False
          TabOrder = 10
        end
        object DTPfbdayfrom: TDateTimePicker
          Left = 215
          Top = 68
          Width = 153
          Height = 25
          Date = 43793.673944872690000000
          Time = 43793.673944872690000000
          TabOrder = 7
        end
        object DTPfbdayto: TDateTimePicker
          Left = 215
          Top = 132
          Width = 153
          Height = 25
          Date = 43793.673944872690000000
          Time = 43793.673944872690000000
          TabOrder = 8
        end
        object Eflastn: TEdit
          Left = 30
          Top = 68
          Width = 153
          Height = 25
          TabOrder = 1
        end
        object Efpatronymicn: TEdit
          Left = 30
          Top = 196
          Width = 153
          Height = 25
          TabOrder = 5
        end
        object CBflastn: TCheckBox
          Left = 30
          Top = 45
          Width = 137
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1055#1086' '#1092#1072#1084#1080#1083#1080#1080
          Color = clBtnFace
          ParentBiDiMode = False
          ParentColor = False
          TabOrder = 0
        end
        object CBfname: TCheckBox
          Left = 30
          Top = 109
          Width = 137
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1055#1086' '#1080#1084#1077#1085#1080
          Color = clBtnFace
          ParentBiDiMode = False
          ParentColor = False
          TabOrder = 2
        end
        object СBfpatronymicn: TCheckBox
          Left = 30
          Top = 173
          Width = 137
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1055#1086' '#1086#1090#1095#1077#1089#1090#1074#1091
          Color = clBtnFace
          ParentBiDiMode = False
          ParentColor = False
          TabOrder = 4
        end
        object CBfbday: TCheckBox
          Left = 215
          Top = 45
          Width = 162
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1055#1086' '#1076#1072#1090#1077' '#1088#1086#1078#1076#1077#1085#1080#1103' '#1054#1090'...'
          Color = clBtnFace
          ParentBiDiMode = False
          ParentColor = False
          TabOrder = 6
        end
        object RG4fdoc: TRadioGroup
          Left = 581
          Top = 164
          Width = 226
          Height = 93
          Caption = #1055#1086' '#1076#1086#1082#1091#1084#1077#1085#1090#1091
          ItemIndex = 0
          Items.Strings = (
            #1086#1073#1072
            #1076#1080#1087#1083#1086#1084
            #1072#1090#1090#1077#1089#1090#1072#1090)
          TabOrder = 15
        end
        object CBfedu: TCheckBox
          Left = 581
          Top = 45
          Width = 137
          Height = 17
          BiDiMode = bdLeftToRight
          Caption = #1055#1086' '#1086#1073#1088#1072#1079#1086#1074#1072#1085#1080#1102
          Color = clBtnFace
          ParentBiDiMode = False
          ParentColor = False
          TabOrder = 13
        end
        object CLBfcitizen: TListBox
          Left = 398
          Top = 68
          Width = 153
          Height = 222
          ItemHeight = 17
          TabOrder = 12
        end
        object CLBfedu: TListBox
          Left = 581
          Top = 68
          Width = 225
          Height = 57
          ItemHeight = 17
          Items.Strings = (
            #1089#1088#1077#1076#1085#1077#1077' '#1086#1073#1097#1077#1077
            #1089#1088#1077#1076#1085#1077#1077' '#1087#1088#1086#1092#1077#1089#1089#1080#1086#1085#1072#1083
            #1085#1072#1095#1072#1083#1100#1085#1086#1077' '#1087#1088#1086#1092#1077#1089#1089#1080#1086#1085)
          TabOrder = 14
        end
        object BitBtn4: TBitBtn
          Left = 399
          Top = 296
          Width = 151
          Height = 33
          Caption = #1054#1073#1085#1086#1074#1080#1090#1100
          Kind = bkRetry
          NumGlyphs = 2
          TabOrder = 11
          OnClick = BitBtn4Click
        end
      end
      object DBNavigator2: TDBNavigator
        Left = 263
        Top = 357
        Width = 102
        Height = 30
        DataSource = DM.DSenr
        VisibleButtons = [nbFirst, nbLast, nbRefresh]
        Hints.Strings = (
          #1055#1077#1088#1074#1072#1103' '#1079#1072#1087#1080#1089#1100
          #1055#1088#1077#1076#1099#1076#1091#1097#1072#1103' '#1079#1072#1087#1080#1089#1080#1100
          #1057#1083#1077#1076#1091#1102#1097#1072#1103' '#1079#1072#1087#1080#1089#1100
          #1055#1086#1089#1083#1077#1076#1085#1103#1103' '#1079#1072#1087#1080#1089#1100
          'Insert record'
          'Delete record'
          'Edit record'
          'Post edit'
          'Cancel edit'
          #1054#1073#1085#1086#1074#1080#1090#1100' '#1076#1072#1085#1085#1099#1077
          'Apply updates'
          'Cancel updates')
        ParentShowHint = False
        ShowHint = True
        TabOrder = 8
        OnClick = DBNavigator1Click
      end
      object Button4: TButton
        Left = 263
        Top = 662
        Width = 102
        Height = 54
        Caption = #1042#1074#1086#1076' '#1074' '#1089#1087#1080#1089#1082#1080' '#1087#1086#1089#1090#1091#1087#1083#1077#1085#1080#1103
        TabOrder = 5
        WordWrap = True
        OnClick = Button4Click
      end
      object DBNenr: TDBNavigator
        Left = 263
        Top = 431
        Width = 102
        Height = 225
        DataSource = DM.DSenr
        VisibleButtons = [nbInsert, nbDelete, nbEdit, nbPost, nbCancel]
        Enabled = False
        Kind = dbnVertical
        TabOrder = 6
        Visible = False
      end
      object B1reports: TButton
        Left = 263
        Top = 393
        Width = 102
        Height = 32
        Caption = #1054#1090#1095#1105#1090#1099
        DropDownMenu = PM1reports
        Style = bsSplitButton
        TabOrder = 9
        WordWrap = True
        OnClick = N3Click
      end
      object Button2: TButton
        Left = 1276
        Top = 615
        Width = 153
        Height = 33
        Caption = #1042#1082#1083#1102#1095#1080#1090#1100' '#1092#1080#1083#1100#1090#1088#1099
        TabOrder = 10
        OnClick = Button2Click
      end
    end
    object TabSheet2: TTabSheet
      Caption = ' '#1055#1088#1080#1105#1084' '#1080' '#1092#1072#1082#1091#1083#1100#1090#1077#1090#1099' '
      ImageIndex = 1
      OnEnter = TabSheet2Enter
      object Label18: TLabel
        Left = 23
        Top = 552
        Width = 76
        Height = 17
        Caption = #1060#1072#1082#1091#1083#1100#1090#1077#1090#1099
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label19: TLabel
        Left = 23
        Top = 9
        Width = 395
        Height = 17
        Caption = #1057#1087#1080#1089#1086#1082' '#1072#1073#1080#1090#1091#1088#1077#1085#1090#1086#1074' '#1087#1086#1089#1090#1091#1087#1072#1102#1097#1080#1093' '#1085#1072' '#1088#1072#1079#1083#1080#1095#1085#1099#1077' '#1092#1072#1082#1091#1083#1100#1090#1077#1090#1099
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object DBGadm: TDBGrid
        Left = 23
        Top = 32
        Width = 1082
        Height = 464
        DataSource = DM.DSadm
        ParentShowHint = False
        ReadOnly = True
        ShowHint = False
        TabOrder = 0
        TitleFont.Charset = RUSSIAN_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -13
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
        OnCellClick = DBGadmCellClick
      end
      object DBGfac: TDBGrid
        Left = 23
        Top = 575
        Width = 514
        Height = 120
        DataSource = DM.DSfac
        TabOrder = 1
        TitleFont.Charset = RUSSIAN_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -13
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
        OnDblClick = DBGfacDblClick
      end
      object GroupBox3: TGroupBox
        Left = 1122
        Top = 32
        Width = 255
        Height = 297
        Caption = #1044#1072#1085#1085#1099#1077' '#1087#1086' '#1079#1072#1087#1080#1089#1080
        TabOrder = 2
        object Label17: TLabel
          Left = 12
          Top = 192
          Width = 136
          Height = 17
          Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090#1099' '#1101#1082#1079#1072#1084#1077#1085#1086#1074':'
        end
        object Label21: TLabel
          Left = 12
          Top = 144
          Width = 62
          Height = 17
          Caption = #1060#1072#1082#1091#1083#1100#1090#1077#1090':'
        end
        object Ltitle_fac: TLabel
          Left = 11
          Top = 167
          Width = 70
          Height = 17
          Caption = #1053#1040#1047#1042#1040#1053#1048#1045
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Segoe UI'
          Font.Style = [fsBold, fsUnderline]
          ParentFont = False
        end
        object LEex1: TLabeledEdit
          Left = 176
          Top = 214
          Width = 65
          Height = 25
          EditLabel.Width = 61
          EditLabel.Height = 17
          EditLabel.Caption = #1069#1082#1079#1072#1084#1077#1085' 1'
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -13
          EditLabel.Font.Name = 'Segoe UI'
          EditLabel.Font.Style = [fsUnderline]
          EditLabel.ParentFont = False
          LabelPosition = lpLeft
          LabelSpacing = 19
          TabOrder = 0
        end
        object LEex2: TLabeledEdit
          Left = 176
          Top = 245
          Width = 65
          Height = 25
          EditLabel.Width = 61
          EditLabel.Height = 17
          EditLabel.Caption = #1069#1082#1079#1072#1084#1077#1085' 2'
          EditLabel.Font.Charset = RUSSIAN_CHARSET
          EditLabel.Font.Color = clWindowText
          EditLabel.Font.Height = -13
          EditLabel.Font.Name = 'Segoe UI'
          EditLabel.Font.Style = [fsUnderline]
          EditLabel.ParentFont = False
          LabelPosition = lpLeft
          LabelSpacing = 19
          TabOrder = 1
        end
        object LEfi: TLabeledEdit
          Left = 11
          Top = 105
          Width = 230
          Height = 25
          EditLabel.Width = 94
          EditLabel.Height = 17
          EditLabel.Caption = #1060#1072#1084#1080#1083#1080#1103' '#1080' '#1048#1084#1103
          TabOrder = 2
        end
        object LEidenr: TLabeledEdit
          Left = 120
          Top = 45
          Width = 121
          Height = 25
          EditLabel.Width = 90
          EditLabel.Height = 17
          EditLabel.Caption = 'ID '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1072
          LabelPosition = lpLeft
          LabelSpacing = 19
          TabOrder = 3
        end
      end
      object DBNadm1: TDBNavigator
        Left = 1122
        Top = 343
        Width = 255
        Height = 51
        DataSource = DM.DSadm
        VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbRefresh]
        TabOrder = 3
        OnClick = DBNadm1Click
      end
      object DBNadm2: TDBNavigator
        Left = 414
        Top = 502
        Width = 300
        Height = 50
        DataSource = DM.DSadm
        VisibleButtons = [nbInsert, nbDelete, nbEdit, nbPost, nbCancel, nbRefresh]
        Enabled = False
        TabOrder = 4
        OnClick = DBNadm2Click
      end
      object DBNfac1: TDBNavigator
        Left = 543
        Top = 575
        Width = 40
        Height = 120
        DataSource = DM.DSfac
        VisibleButtons = [nbInsert, nbDelete, nbPost]
        Enabled = False
        Kind = dbnVertical
        TabOrder = 5
        Visible = False
        OnClick = DBNadm2Click
      end
      object DBNfac2: TDBNavigator
        Left = 581
        Top = 575
        Width = 40
        Height = 120
        DataSource = DM.DSfac
        VisibleButtons = [nbEdit, nbCancel, nbRefresh]
        Enabled = False
        Kind = dbnVertical
        TabOrder = 6
        Visible = False
        OnClick = DBNadm2Click
      end
      object CBadm: TCheckBox
        Left = 23
        Top = 503
        Width = 194
        Height = 17
        Caption = #1056#1072#1079#1088#1077#1096#1080#1090#1100' '#1088#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
        Enabled = False
        TabOrder = 7
        OnClick = CBadmClick
      end
      object CBfac: TCheckBox
        Left = 23
        Top = 701
        Width = 194
        Height = 17
        Caption = #1056#1072#1079#1088#1077#1096#1080#1090#1100' '#1088#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
        Enabled = False
        TabOrder = 8
        Visible = False
        OnClick = CBfacClick
      end
      object Bunfil: TButton
        Left = 223
        Top = 502
        Width = 122
        Height = 25
        Hint = #1057#1073#1088#1072#1089#1099#1074#1072#1077#1090' '#1092#1080#1083#1100#1090#1088#1099' '#1087#1088#1080' '#1085#1072#1083#1080#1095#1080#1080
        Caption = #1057#1073#1088#1086#1089#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
        Enabled = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 9
        OnClick = BunfilClick
      end
    end
    object TabSheet3: TTabSheet
      Caption = ' '#1055#1086#1089#1090#1091#1087#1083#1077#1085#1080#1077' '
      ImageIndex = 2
      OnEnter = TabSheet3Enter
      OnExit = TabSheet3Exit
      object Label26: TLabel
        Left = 23
        Top = 9
        Width = 513
        Height = 17
        Caption = 
          #1057#1087#1080#1089#1086#1082' '#1089' '#1088#1072#1089#1087#1088#1077#1076#1077#1083#1077#1085#1080#1077#1084' '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1086#1074' '#1087#1088#1086#1096#1077#1076#1096#1080#1093' '#1074#1089#1090#1091#1087#1080#1090#1077#1083#1100#1085#1099#1077' '#1080#1089#1087 +
          #1099#1090#1072#1085#1080#1103
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object DBGemt: TDBGrid
        Left = 23
        Top = 32
        Width = 830
        Height = 433
        DataSource = DM.DSemt
        ReadOnly = True
        TabOrder = 0
        TitleFont.Charset = RUSSIAN_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -13
        TitleFont.Name = 'Segoe UI'
        TitleFont.Style = []
        OnCellClick = DBGemtCellClick
      end
      object BitBtn5: TBitBtn
        Left = 887
        Top = 417
        Width = 117
        Height = 48
        Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1100' '#1090#1072#1073#1083#1080#1094#1091
        TabOrder = 1
        WordWrap = True
        OnClick = BitBtn5Click
      end
      object BitBtn6: TBitBtn
        Left = 1023
        Top = 417
        Width = 119
        Height = 48
        Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1090#1072#1073#1083#1080#1094#1091
        TabOrder = 2
        WordWrap = True
        OnClick = BitBtn6Click
      end
      object DBNavigator3: TDBNavigator
        Left = 887
        Top = 352
        Width = 255
        Height = 51
        DataSource = DM.DSfac
        VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbRefresh]
        TabOrder = 3
        OnClick = DBNavigator3Click
      end
      object GroupBox5: TGroupBox
        Left = 887
        Top = 32
        Width = 255
        Height = 297
        Caption = #1044#1072#1085#1085#1099#1077' '#1087#1086' '#1079#1072#1087#1080#1089#1080
        TabOrder = 4
        object Label20: TLabel
          Left = 11
          Top = 209
          Width = 120
          Height = 34
          Caption = #1057#1091#1084#1084#1072' '#1088#1077#1079#1091#1083#1100#1090#1072#1090#1086#1074' '#1087#1086' '#1101#1082#1079#1072#1084#1077#1085#1072#1084':'
          WordWrap = True
        end
        object Label22: TLabel
          Left = 12
          Top = 144
          Width = 62
          Height = 17
          Caption = #1060#1072#1082#1091#1083#1100#1090#1077#1090':'
        end
        object Ltitle_fac2: TLabel
          Left = 11
          Top = 167
          Width = 110
          Height = 17
          Caption = '______________________'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Segoe UI'
          Font.Style = [fsBold, fsUnderline]
          ParentFont = False
        end
        object Label24: TLabel
          Left = 12
          Top = 256
          Width = 105
          Height = 17
          Caption = #1060#1086#1088#1084#1072' '#1086#1073#1091#1095#1077#1085#1080#1103':'
        end
        object Lbud_com: TLabel
          Left = 147
          Top = 256
          Width = 80
          Height = 17
          Caption = '________________'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Segoe UI'
          Font.Style = [fsBold, fsUnderline]
          ParentFont = False
        end
        object LEfi2: TLabeledEdit
          Left = 11
          Top = 97
          Width = 230
          Height = 25
          EditLabel.Width = 94
          EditLabel.Height = 17
          EditLabel.Caption = #1060#1072#1084#1080#1083#1080#1103' '#1080' '#1048#1084#1103
          ReadOnly = True
          TabOrder = 0
        end
        object LEidenr2: TLabeledEdit
          Left = 120
          Top = 45
          Width = 121
          Height = 25
          EditLabel.Width = 90
          EditLabel.Height = 17
          EditLabel.Caption = 'ID '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1072
          LabelPosition = lpLeft
          LabelSpacing = 19
          ReadOnly = True
          TabOrder = 1
        end
        object Eresults_exam: TEdit
          Left = 144
          Top = 216
          Width = 97
          Height = 25
          ReadOnly = True
          TabOrder = 2
        end
      end
      object CBemt: TCheckBox
        Left = 23
        Top = 471
        Width = 194
        Height = 17
        Caption = #1056#1072#1079#1088#1077#1096#1080#1090#1100' '#1088#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
        Enabled = False
        TabOrder = 5
        OnClick = CBemtClick
      end
      object DBNemt: TDBNavigator
        Left = 223
        Top = 471
        Width = 145
        Height = 26
        DataSource = DM.DSemt
        VisibleButtons = [nbInsert, nbDelete, nbEdit, nbPost, nbCancel]
        Enabled = False
        TabOrder = 6
        Visible = False
      end
      object PB1: TProgressBar
        Left = 624
        Top = 471
        Width = 229
        Height = 22
        Step = 1
        TabOrder = 7
      end
      object GroupBox6: TGroupBox
        Left = 1166
        Top = 40
        Width = 255
        Height = 289
        TabOrder = 8
        object Label23: TLabel
          Left = 11
          Top = 92
          Width = 104
          Height = 17
          Caption = #1047#1072#1087#1080#1089#1077#1081' '#1074#1085#1077#1089#1077#1085#1086':'
          WordWrap = True
        end
        object Label25: TLabel
          Left = 12
          Top = 40
          Width = 129
          Height = 17
          Caption = #1047#1072#1087#1080#1089#1077#1081' '#1086#1073#1088#1072#1073#1086#1090#1072#1085#1086':'
        end
        object LcntEnr: TLabel
          Left = 163
          Top = 38
          Width = 6
          Height = 20
          Caption = '-'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clNavy
          Font.Height = -15
          Font.Name = 'Segoe UI'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Label27: TLabel
          Left = 11
          Top = 136
          Width = 104
          Height = 51
          Caption = #1080#1079' '#1085#1080#1093' '#1085#1072' '#1073#1102#1076#1078#1077#1090#1085#1091#1102' '#1092#1086#1088#1084#1091' '#1086#1073#1091#1095#1077#1085#1080#1103':'
          WordWrap = True
        end
        object LcntEmt: TLabel
          Left = 163
          Top = 90
          Width = 6
          Height = 20
          Caption = '-'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clNavy
          Font.Height = -15
          Font.Name = 'Segoe UI'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object LcntEmtBud: TLabel
          Left = 163
          Top = 167
          Width = 6
          Height = 20
          Caption = '-'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clNavy
          Font.Height = -15
          Font.Name = 'Segoe UI'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Label28: TLabel
          Left = 11
          Top = 201
          Width = 104
          Height = 51
          Caption = #1080#1079' '#1085#1080#1093' '#1085#1072' '#1082#1086#1084#1084#1077#1088#1095#1077#1089#1082#1091#1102' '#1092#1086#1088#1084#1091' '#1086#1073#1091#1095#1077#1085#1080#1103':'
          WordWrap = True
        end
        object LcntEmtCom: TLabel
          Left = 163
          Top = 232
          Width = 6
          Height = 20
          Caption = '-'
          Font.Charset = RUSSIAN_CHARSET
          Font.Color = clNavy
          Font.Height = -15
          Font.Name = 'Segoe UI'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object GroupBox7: TGroupBox
        Left = 23
        Top = 503
        Width = 927
        Height = 196
        Caption = #1060#1080#1083#1100#1090#1088#1099' '#1080' '#1087#1086#1080#1089#1082
        TabOrder = 9
        object LEfex2: TLabeledEdit
          Left = 278
          Top = 103
          Width = 33
          Height = 25
          Alignment = taCenter
          EditLabel.Width = 17
          EditLabel.Height = 17
          EditLabel.Caption = #1044#1086
          NumbersOnly = True
          TabOrder = 0
          Text = '200'
          OnChange = LEfex2Change
        end
        object RGfbud_com: TRadioGroup
          Left = 328
          Top = 36
          Width = 185
          Height = 126
          Caption = #1055#1086' '#1092#1086#1088#1084#1077' '#1086#1073#1091#1095#1077#1085#1080#1103
          ItemIndex = 0
          Items.Strings = (
            #1074#1089#1077
            #1073#1102#1076#1078#1077#1090
            #1082#1086#1084#1084#1077#1088#1094#1080#1103)
          TabOrder = 1
        end
        object LEfex1: TLabeledEdit
          Left = 33
          Top = 103
          Width = 33
          Height = 25
          Alignment = taCenter
          EditLabel.Width = 15
          EditLabel.Height = 17
          EditLabel.Caption = #1054#1090
          NumbersOnly = True
          TabOrder = 2
          Text = '0'
          OnChange = LEfex1Change
        end
        object TBfex1: TTrackBar
          Left = 72
          Top = 75
          Width = 200
          Height = 45
          Max = 100
          ParentShowHint = False
          Frequency = 10
          SelEnd = 10
          SelStart = 5
          ShowHint = True
          ShowSelRange = False
          TabOrder = 3
          OnChange = TBfex1Change
        end
        object TBfex2: TTrackBar
          Left = 72
          Top = 126
          Width = 200
          Height = 45
          LineSize = 10
          Max = 100
          Frequency = 10
          Position = 100
          ShowSelRange = False
          TabOrder = 4
          OnChange = TBfex2Change
        end
        object LBffac: TListBox
          Left = 545
          Top = 72
          Width = 170
          Height = 89
          ItemHeight = 17
          Items.Strings = (
            #1052#1077#1085#1077#1076#1078#1084#1077#1085#1090
            #1055#1088#1080#1082#1083#1072#1076#1085#1072#1103' '#1080#1085#1092#1086#1088#1084#1072#1090#1080#1082#1072
            #1058#1091#1088#1080#1079#1084
            #1060#1080#1085#1072#1085#1089#1099)
          TabOrder = 5
        end
        object CBfexams: TCheckBox
          Left = 33
          Top = 36
          Width = 168
          Height = 17
          Caption = #1055#1086' '#1089#1091#1084#1084#1077' '#1073#1072#1083#1083#1086#1074
          TabOrder = 6
        end
        object CBffac: TCheckBox
          Left = 545
          Top = 36
          Width = 168
          Height = 17
          Caption = #1055#1086' '#1092#1072#1082#1091#1083#1100#1090#1077#1090#1091
          TabOrder = 7
        end
        object BitBtn7: TBitBtn
          Left = 745
          Top = 120
          Width = 152
          Height = 41
          Caption = #1042#1082#1083#1102#1095#1080#1090#1100' '#1092#1080#1083#1100#1090#1088#1099
          TabOrder = 8
          OnClick = BitBtn7Click
        end
      end
      object Button3: TButton
        Left = 887
        Top = 471
        Width = 117
        Height = 33
        Caption = #1054#1090#1095#1105#1090#1099
        PopupMenu = PM2reports
        Style = bsSplitButton
        TabOrder = 10
      end
    end
  end
  object Button1: TButton
    Left = 1289
    Top = 759
    Width = 179
    Height = 40
    Anchors = [akTop, akRight]
    Caption = #1042#1086#1079#1074#1088#1072#1090' '#1085#1072' '#1075#1083#1072#1074#1085#1091#1102
    TabOrder = 1
    WordWrap = True
    OnClick = Button1Click
  end
  object T1: TTimer
    Left = 976
    Top = 766
  end
  object PM1reports: TPopupMenu
    Left = 48
    Top = 768
    object N1: TMenuItem
      Caption = #1057#1087#1080#1089#1086#1082' '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1086#1074
      object N2: TMenuItem
        Caption = #1055#1077#1095#1072#1090#1100
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1055#1088#1077#1076#1087#1088#1086#1089#1084#1086#1090#1088
        OnClick = N3Click
      end
      object PDF2: TMenuItem
        Caption = #1069#1082#1089#1087#1086#1088#1090' '#1074' PDF'
        OnClick = PDF2Click
      end
    end
    object PDF1: TMenuItem
      Caption = #1055#1086#1076#1088#1086#1073#1085#1086' '#1087#1086' '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1072#1084
      object N4: TMenuItem
        Caption = #1055#1077#1095#1072#1090#1100
        OnClick = N4Click
      end
      object N5: TMenuItem
        Caption = #1055#1088#1077#1076#1087#1088#1086#1089#1084#1086#1090#1088
        OnClick = N5Click
      end
      object PDF3: TMenuItem
        Caption = #1069#1082#1089#1087#1086#1088#1090' '#1074' PDF'
        OnClick = PDF3Click
      end
    end
  end
  object PM2reports: TPopupMenu
    Left = 120
    Top = 768
    object MenuItem1: TMenuItem
      Caption = #1057#1087#1080#1089#1082#1080' '#1087#1086#1089#1090#1091#1087#1080#1074#1096#1080#1093
      object MenuItem2: TMenuItem
        Caption = #1055#1077#1095#1072#1090#1100
        OnClick = MenuItem2Click
      end
      object MenuItem3: TMenuItem
        Caption = #1055#1088#1077#1076#1087#1088#1086#1089#1084#1086#1090#1088
        OnClick = MenuItem3Click
      end
      object MenuItem4: TMenuItem
        Caption = #1069#1082#1089#1087#1086#1088#1090' '#1074' PDF'
        OnClick = MenuItem4Click
      end
    end
  end
end
