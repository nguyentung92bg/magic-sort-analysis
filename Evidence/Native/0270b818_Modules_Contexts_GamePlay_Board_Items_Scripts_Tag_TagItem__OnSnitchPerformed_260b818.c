/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$OnSnitchPerformed
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnSnitchPerformed (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0270b6b8) */
/* WARNING: Removing unreachable block (ram,0x0270b6d4) */
/* WARNING: Removing unreachable block (ram,0x0270b6d8) */
/* WARNING: Removing unreachable block (ram,0x01fee154) */
/* WARNING: Removing unreachable block (ram,0x01fee17c) */
/* WARNING: Removing unreachable block (ram,0x01fee180) */
/* WARNING: Removing unreachable block (ram,0x01fee190) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$OnSnitchPerformed
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnSnitchPerformed
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, const MethodInfo* method);
    */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnSnitchPerformed_260b818
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return param_1;
  }
  lVar3 = param_1;
  if ((bRam0000000005c2b9da & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05760f88);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e0620);
    lVar3 = FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b9da = 1;
  }
  puVar2 = PTR_DAT_057b8520;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar1 = PTR_DAT_05760f88;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                  (*(long *)(param_1 + 0x50),param_1,0);
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar3 != 0) {
          if ((bRam0000000005c2b9e0 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057dad50);
            bRam0000000005c2b9e0 = 1;
          }
          lVar3 = *(long *)(lVar3 + 0x48);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar4 = *(undefined8 *)PTR_DAT_057dad50;
          if (pcRam0000000005c28c10 == (code *)0x0) {
            pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar4,0);
          }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar3 = (*pcRam0000000005c28c10)(lVar3,uVar4,0);
          return lVar3;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return lVar3;
}

