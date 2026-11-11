/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$OnSnitchPerformed
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnSnitchPerformed (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02590984) */
/* WARNING: Removing unreachable block (ram,0x02590a18) */
/* WARNING: Removing unreachable block (ram,0x02590a20) */
/* WARNING: Removing unreachable block (ram,0x02590a2c) */
/* WARNING: Removing unreachable block (ram,0x02590a34) */
/* WARNING: Removing unreachable block (ram,0x041ead1c) */
/* WARNING: Removing unreachable block (ram,0x041ead30) */
/* WARNING: Removing unreachable block (ram,0x022fe044) */
/* WARNING: Removing unreachable block (ram,0x022fe090) */
/* WARNING: Removing unreachable block (ram,0x022fe06c) */
/* WARNING: Removing unreachable block (ram,0x022fe094) */
/* WARNING: Removing unreachable block (ram,0x041ead54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$OnSnitchPerformed
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnSnitchPerformed
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, const MethodInfo*
   method); */

undefined8 *
Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnSnitchPerformed_2490ab4
          (undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return param_1;
  }
  puVar7 = param_1;
  if ((bRam0000000005c2b2a3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781138);
    puVar7 = (undefined8 *)FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2b2a3 = 1;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    if ((param_1[10] != 0) && (lVar8 = *(long *)(param_1[10] + 0x40), lVar8 != 0)) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar8,param_1,0);
      puVar6 = PTR_DAT_057b8520;
      puVar5 = PTR_DAT_05781138;
      if (param_1[10] != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                  (param_1[10],param_1);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar5);
        if (lVar8 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
          if ((bRam0000000005c2b2a4 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057881c8);
            FUN_012d0dc8(PTR_DAT_05787390);
            FUN_012d0dc8(PTR_DAT_057b68c8);
            FUN_012d0dc8(PTR_DAT_057606c8);
            bRam0000000005c2b2a4 = 1;
          }
          puVar5 = PTR_DAT_057606c8;
          uVar9 = param_1[9];
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
          if (lVar8 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,uVar9,*(undefined8 *)PTR_DAT_05787390,0);
            DG_Tweening_DOVirtual__DelayedCall_1edcb38(0,lVar8,0,0);
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
            uVar4 = _UNK_0438e954;
            if (lVar8 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar8,param_1,*(undefined8 *)PTR_DAT_057881c8,0);
              uVar9 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar4,lVar8,0,0);
              param_1 = param_1 + 0xc;
              *param_1 = uVar9;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return param_1;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return puVar7;
}

