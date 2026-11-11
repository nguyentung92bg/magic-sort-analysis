/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$QuitFromDaily
void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__QuitFromDaily (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$QuitFromDaily
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__QuitFromDaily
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__QuitFromDaily_3e222c0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c38119 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_057acad0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    FUN_012d0dc8(PTR_DAT_0576cf88);
    bRam0000000005c38119 = 1;
  }
  lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
  if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) &&
     (plVar2 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar4,*(undefined8 *)PTR_DAT_057acad0), plVar2 != (long *)0x0)) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0576cf88) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_03f223a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0576cf88,1);
LAB_03f223a8:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) &&
       (plVar2 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar4,*(undefined8 *)PTR_DAT_05791da0), plVar2 != (long *)0x0))
    {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575bba8) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
            goto LAB_03f2243c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575bba8,10);
LAB_03f2243c:
                    /* WARNING: Could not recover jumptable at 0x03f2244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

