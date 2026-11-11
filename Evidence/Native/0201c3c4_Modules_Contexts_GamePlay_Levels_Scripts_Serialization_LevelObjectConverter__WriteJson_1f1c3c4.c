/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelObjectConverter$$WriteJson
void Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__WriteJson (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelObjectConverter$$WriteJson
   void Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__WriteJson
   (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter_o* __this,
   Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o*
   serializer, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__WriteJson_1f1c3c4
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  if ((bRam0000000005c2865b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a568);
    FUN_012d0dc8(PTR_DAT_0581aec8);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_057952c8);
    FUN_012d0dc8(PTR_DAT_0580c540);
    FUN_012d0dc8(PTR_DAT_057610e0);
    FUN_012d0dc8(PTR_DAT_057c77a0);
    FUN_012d0dc8(PTR_DAT_0578b728);
    FUN_012d0dc8(PTR_DAT_058086d0);
    bRam0000000005c2865b = 1;
  }
  puVar3 = PTR_DAT_0581aec8;
  if (param_3 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_057952c8 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_057952c8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_3);
    }
    uVar10 = Newtonsoft_Json_Linq_JArray__FromObject_1378af0(param_3[2],param_4,0);
    plVar11 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar3);
    puVar9 = PTR_DAT_0581a568;
    puVar8 = PTR_DAT_0580c540;
    puVar7 = PTR_DAT_058086d0;
    puVar6 = PTR_DAT_057c77a0;
    puVar5 = PTR_DAT_0578b728;
    puVar4 = PTR_DAT_0577c730;
    puVar3 = PTR_DAT_057610e0;
    if (plVar11 != (long *)0x0) {
      Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(plVar11,0);
      uVar1 = *(undefined4 *)((long)param_3 + 0x1c);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar12 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar1,0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar11,*(undefined8 *)puVar3,uVar12,0);
      uVar12 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c((int)param_3[4],0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar11,*(undefined8 *)puVar7,uVar12,0);
      uVar12 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c((int)param_3[3],0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar11,*(undefined8 *)puVar5,uVar12,0);
      uVar12 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d3c60(param_3[5],0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar11,*(undefined8 *)puVar8,uVar12,0);
      Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar11,*(undefined8 *)puVar6,uVar10,0);
      lVar14 = *(long *)puVar9;
      lVar13 = **(long **)(lVar14 + 0x38);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_0131942c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar13 = **(long **)(lVar14 + 0x38);
      if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
        lVar13 = FUN_0131942c();
      }
                    /* WARNING: Could not recover jumptable at 0x0201c624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x2b8))
                (plVar11,param_2,**(undefined8 **)(lVar13 + 0xb8),*(undefined8 *)(*plVar11 + 0x2c0))
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

