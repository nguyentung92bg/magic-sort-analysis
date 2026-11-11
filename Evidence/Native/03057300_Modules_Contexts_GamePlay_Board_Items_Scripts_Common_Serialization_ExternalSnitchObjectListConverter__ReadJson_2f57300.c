/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.ExternalSnitchObjectListConverter$$ReadJson
Il2CppObject* Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_ExternalSnitchObjectListConverter__ReadJson (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_ExternalSnitchObjectListConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization.ExternalSnitchObjectListConverter$$ReadJson
   Il2CppObject*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_ExternalSnitchObjectListConverter__ReadJson
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_ExternalSnitchObjectListConverter_o*
   __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject*
   existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Common_Serialization_ExternalSnitchObjectListConverter__ReadJson_2f57300
               (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_0576a3a0;
  if ((bRam0000000005c308b1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6eb8);
    FUN_012d0dc8(PTR_DAT_057d1300);
    FUN_012d0dc8(PTR_DAT_057e0c40);
    FUN_012d0dc8(PTR_DAT_05801888);
    FUN_012d0dc8(PTR_DAT_057aba30);
    FUN_012d0dc8(PTR_DAT_0579a748);
    FUN_012d0dc8(PTR_DAT_057f0450);
    FUN_012d0dc8(PTR_DAT_05801ae0);
    FUN_012d0dc8(PTR_DAT_057fc1a8);
    FUN_012d0dc8(PTR_DAT_0576a3a0);
    FUN_012d0dc8(PTR_DAT_05759808);
    bRam0000000005c308b1 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Object___ctor_23dfe5c(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = param_5;
  FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_5);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar2 == 0xb) {
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f0450);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_0579a748);
  }
  else {
    uVar4 = Newtonsoft_Json_Linq_JArray__Load_1378720(param_2,0);
    puVar1 = PTR_DAT_05759808;
    lVar6 = *(long *)PTR_DAT_05759808;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05801888);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Func_object__bool____ctor_338137c(lVar7,uVar8,*(undefined8 *)PTR_DAT_05801ae0,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar5 = lVar7;
      FUN_012d0d74(plVar5,lVar7);
    }
    uVar4 = System_Linq_Enumerable__Where_object__2430e98
                      (uVar4,lVar7,*(undefined8 *)PTR_DAT_057e0c40);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057aba30);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Func_object__object____ctor_33820ac(lVar6,lVar3,*(undefined8 *)PTR_DAT_057fc1a8,0);
    uVar4 = System_Linq_Enumerable__Select_object__object__2427df8
                      (uVar4,lVar6,*(undefined8 *)PTR_DAT_057e6eb8);
    lVar3 = System_Linq_Enumerable__ToList_object__242f814(uVar4,*(undefined8 *)PTR_DAT_057d1300);
  }
  return lVar3;
}

