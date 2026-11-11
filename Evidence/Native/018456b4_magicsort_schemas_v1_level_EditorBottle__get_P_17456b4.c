/* IL2CPP: magicsort.schemas.v1.level.EditorBottle$$get_P
System_Nullable_Position__o magicsort_schemas_v1_level_EditorBottle__get_P (magicsort_schemas_v1_level_EditorBottle_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.level.EditorBottle$$get_P
   System_Nullable_Position__o magicsort_schemas_v1_level_EditorBottle__get_P
   (magicsort_schemas_v1_level_EditorBottle_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_level_EditorBottle__get_P_17456b4(undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c24d97 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874f8);
    bRam0000000005c24d97 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = Google_FlatBuffers_Table____offset_3139a10(param_2,6,0);
  puVar1 = PTR_DAT_057874f8;
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
    auVar4 = magicsort_schemas_v1_level_Position____assign_1600cc4
                       (&uStack_30,*param_2 + iVar2,*(undefined8 *)(param_2 + 2),0);
    uVar3 = *(undefined8 *)puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    System_Nullable_Position____ctor_203f6e4(param_1,auVar4._0_8_,auVar4._8_8_,uVar3);
  }
  return;
}

