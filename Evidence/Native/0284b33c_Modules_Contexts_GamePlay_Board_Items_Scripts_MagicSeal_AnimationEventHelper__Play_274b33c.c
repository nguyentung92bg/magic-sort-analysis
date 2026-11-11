/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.AnimationEventHelper$$Play
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_AnimationEventHelper__Play (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_AnimationEventHelper_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.AnimationEventHelper$$Play
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_AnimationEventHelper__Play
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_AnimationEventHelper_o* __this, int32_t
   index, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_AnimationEventHelper__Play_274b33c
               (long param_1,undefined4 param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  if ((bRam0000000005c2c6be & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057daaf8);
    bRam0000000005c2c6be = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),param_2,*(undefined8 *)PTR_DAT_057daaf8),
     lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c376a6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057858a0,0);
    FUN_012d0dc8(PTR_DAT_057d6c20);
    FUN_012d0dc8(PTR_DAT_05810948);
    FUN_012d0dc8(PTR_DAT_0580bde0);
    bRam0000000005c376a6 = 1;
  }
  lVar7 = UnityEngine_Events_UnityEventBase__PrepareInvoke_3d57c08(lVar6);
  puVar5 = PTR_DAT_05810948;
  puVar4 = PTR_DAT_0580bde0;
  puVar3 = PTR_DAT_057858a0;
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar9 = 0;
      plVar1 = (long *)(lVar6 + 0x28);
      do {
        plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                   (lVar7,iVar9,*(undefined8 *)puVar5);
        if (plVar8 == (long *)0x0) {
LAB_03e58030:
          plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar7,iVar9,*(undefined8 *)puVar5);
          if (plVar8 != (long *)0x0) {
            lVar6 = *(long *)puVar3;
            bVar2 = *(byte *)(lVar6 + 300);
            if ((bVar2 <= *(byte *)(*plVar8 + 300)) &&
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) == lVar6))
            goto LAB_03e580c4;
          }
          plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar7,iVar9,*(undefined8 *)puVar5);
          if (*plVar1 == 0) {
            lVar6 = FUN_012d0e38(*(undefined8 *)puVar4,0);
            *plVar1 = lVar6;
            FUN_012d0d74(plVar1,lVar6);
          }
          if (plVar8 == (long *)0x0) goto LAB_03e580ec;
          (**(code **)(*plVar8 + 0x178))(plVar8,*plVar1,*(undefined8 *)(*plVar8 + 0x180));
        }
        else {
          lVar6 = *(long *)puVar3;
          bVar2 = *(byte *)(lVar6 + 300);
          if ((*(byte *)(*plVar8 + 300) < bVar2) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != lVar6))
          goto LAB_03e58030;
LAB_03e580c4:
          UnityEngine_Events_InvokableCall__Invoke_3d5623c();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar7 + 0x18));
    }
    return;
  }
LAB_03e580ec:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

