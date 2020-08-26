class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        min_angle = minutes/5 
        diff = abs(hour - min_angle)
        ans = diff * 30
        if min_angle < hour:
            ans = ans + (minutes / 60) * 30
        else: 
            ans = ans - (minutes / 60) * 30
        if abs(ans) > 180:
            return 360 - abs(ans)
        return abs(ans)        
        