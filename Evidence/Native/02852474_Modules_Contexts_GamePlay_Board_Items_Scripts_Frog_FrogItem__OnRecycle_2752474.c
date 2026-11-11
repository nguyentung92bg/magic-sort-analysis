/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$OnRecycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnRecycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$OnRecycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnRecycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnRecycle_2752474(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2c705 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057eb5c8);
    FUN_012d0dc8(PTR_DAT_057ea348);
    FUN_012d0dc8(PTR_DAT_0580c178);
    FUN_012d0dc8(PTR_DAT_05793078);
    bRam0000000005c2c705 = 1;
  }
  puVar2 = PTR_DAT_057eb5c8;
  puVar1 = PTR_DAT_057ea348;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (param_1[0x12] != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,param_1[0x12],*(undefined8 *)PTR_DAT_05793078);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar1);
      lVar4 = lStack_38;
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar2);
        Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        puVar1 = PTR_DAT_05805c10;
        lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        (**(code **)(*param_1 + 0x1d8))
                  (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
        UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                  (*pfVar5 * _UNK_04339bec,pfVar5[1] * _UNK_04339bec,pfVar5[2] * _UNK_04339bec,0);
        Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation_40ea1a4(param_1,0);
        return;
      }
      if (lStack_38 == 0) break;
      Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518(lStack_38,0,0);
      Modules_Infrastructure_Common_Scripts_Component_AItemPart__Recycle_40ea4c0(lVar4,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

