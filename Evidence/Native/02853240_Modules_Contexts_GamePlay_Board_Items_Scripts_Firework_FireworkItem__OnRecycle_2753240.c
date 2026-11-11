/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$OnRecycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__OnRecycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$OnRecycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__OnRecycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__OnRecycle_2753240
               (long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if ((bRam0000000005c2c70f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e8c0);
    FUN_012d0dc8(PTR_DAT_0580f930);
    FUN_012d0dc8(PTR_DAT_057f1320);
    FUN_012d0dc8(PTR_DAT_05764108);
    FUN_012d0dc8(PTR_DAT_057b2af0);
    bRam0000000005c2c70f = 1;
  }
  puVar3 = PTR_DAT_0580f930;
  puVar2 = PTR_DAT_0577e8c0;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_40 = 0;
  if (param_1[0xd] != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,param_1[0xd],*(undefined8 *)PTR_DAT_057b2af0);
    uStack_38 = uStack_50;
    uStack_40 = uStack_58;
    lStack_30 = lStack_48;
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_40,*(undefined8 *)puVar3);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_40,*(undefined8 *)puVar2);
        lVar5 = param_1[0xd];
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x18);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
          }
        }
        Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        (**(code **)(*param_1 + 0x1d8))
                  (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                   *(undefined4 *)(lVar5 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
        return;
      }
      if (lStack_30 == 0) break;
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__ReleaseTargetedCell_2752d04
                (param_1[0xe],*(undefined8 *)(lStack_30 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

